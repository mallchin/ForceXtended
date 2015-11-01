;============================================================================
; Layout
;============================================================================

[ModuleTitle]
Meter=String
MeasureName=DriveType
MeterStyle=ModuleTitleStyle
Text="%1 Drive"

[ModuleIcon]
Meter=Image
MeterStyle=ModuleIconStyle
ImageName=drive.png

;============================================================================
; Measures
;============================================================================

[DriveLabel]
Measure=FreeDiskSpace
IgnoreRemovable=0
Drive=#DRIVE_MOUNT#
Label=1
UpdateDivider=3
Substitute="":"No Label"

[DriveType]
Measure=FreeDiskSpace
IgnoreRemovable=0
Drive=#DRIVE_MOUNT#
Type=1
UpdateDivider=5
Substitute="":"Drive"
; FIXME - Why can't condition 1 and 2 be merged?
IfCondition=DriveType <> 4
IfTrueAction=[!SetOption ModuleIcon ImageName "disk.png"][!HideMeterGroup "DriveTemp"][!SetVariable "HEIGHT" #HEIGHT_NO_TEMP#][!SetOption DriveWriteLine Y "73"]
IfCondition2=#SPEEDFAN_ID# = -1
IfTrueAction2=[!HideMeterGroup "DriveTemp"][!SetVariable "HEIGHT" #HEIGHT_NO_TEMP#][!SetOption DriveWriteLine Y "73"]
IfCondition3=DriveType = 6
IfTrueAction3=[!SetOption ModuleIcon ImageName "cd.png"][!HideMeterGroup "DriveStats"][!HideMeterGroup "DriveUsage"][!HideMeterGroup "DriveGraph"][!SetOption DriveLabelString Prefix "#DRIVE_MOUNT#  "][!SetOption DriveLabelString Text "[optical drives are not supported]"][!SetOption DriveLabelString Postfix ""][!SetVariable "HEIGHT" #HEIGHT_NO_TEMP#][!SetOption DriveWriteLine Y "73"]

[DriveFree]
Measure=FreeDiskSpace
IgnoreRemovable=0
Drive=#DRIVE_MOUNT#
UpdateDivider=2

[DriveUsed]
Measure=FreeDiskSpace
IgnoreRemovable=0
Drive=#DRIVE_MOUNT#
InvertMeasure=1
UpdateDivider=2

[DriveTotal]
Measure=FreeDiskSpace
IgnoreRemovable=0
Drive=#DRIVE_MOUNT#
Total=1
IfCondition=(DriveTotal = 0) && (DriveType <> 6)
IfTrueAction=[!HideMeterGroup "DriveStats"][!HideMeterGroup "DriveUsage"][!HideMeterGroup "DriveGraph"][!SetOption DriveLabelString Prefix "#DRIVE_MOUNT#  "][!SetOption DriveLabelString Text "[not mounted]"][!SetOption DriveLabelString Postfix ""]
IfCondition2=(DriveTotal > 0) && (DriveType <> 6)
IfTrueAction2=[!ShowMeterGroup "DriveStats"][!ShowMeterGroup "DriveUsage"][!ShowMeterGroup "DriveGraph"][!SetOption DriveLabelString Prefix "#DRIVE_MOUNT#  ("][!SetOption DriveLabelString Text "%1"][!SetOption DriveLabelString Postfix ")"]
IfCondition3=(DriveTotal = 0) && (DriveType = 6)
IfTrueAction3=[!HideMeterGroup "DriveStats"]
UpdateDivider=2

[DriveTemp]
Measure=Plugin
PlugIn=SpeedFanPlugin
SpeedFanNumber=#SPEEDFAN_ID#
SpeedFanScale=#TEMP_UNIT#
MaxValue=#TEMP_MAX#
MinValue=0
UpdateDivider=2

[DriveReadAccess]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#DRIVE_MOUNT#"
UpdateDivider=1

[DriveWriteAccess]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#DRIVE_MOUNT#"
UpdateDivider=1

;============================================================================
; Meters
;============================================================================

;----------------------------------------------------------------------------
; Drive Information
;----------------------------------------------------------------------------

[DriveLabelString]
Meter=String
MeterStyle=BodyString | SizeString
MeasureName=DriveLabel
X=#PADDING_LEFT#
Y=#PADDING_TOP#
Prefix="#DRIVE_MOUNT#  ("
Postfix=")"
Text=%1

;----------------------------------------------------------------------------
; Drive Usage Bar
;----------------------------------------------------------------------------

[MemoryUsedString]
Meter=String
MeterStyle=BodyString | SizeString | UsageBarUsedString
MeasureName=DriveUsed
Group=DriveStats

[MemoryFreeString]
Meter=String
MeterStyle=BodyString | SizeString | UsageBarFreeString
MeasureName=DriveFree
Group=DriveStats

[MemoryUsageString]
Meter=String
MeterStyle=BodyString | SizeString | UsageBarString
MeasureName=DriveUsed
Group=DriveUsage

[MemoryUsageBarBack]
Meter=Image
MeterStyle=UsageBarBack
Group=DriveUsage

[MemoryUsageBar]
Meter=Bar
MeterStyle=UsageBar
MeasureName=DriveUsed
Group=DriveUsage

[MemoryTotalString]
Meter=String
MeasureName=DriveTotal
MeterStyle=BodyString | SizeString | UsageBarTotalString
Group=DriveStats

;----------------------------------------------------------------------------
; Drive Temperature
;----------------------------------------------------------------------------

[DriveTempNameString]
Meter=String
MeterStyle=BodyString | TempBarString
Group=DriveTemp

[DriveTempBarBack]
Meter=Image
MeterStyle=TempBarBack
Group=DriveTemp

[DriveTempBar]
Meter=Bar
MeterStyle=TempBar
MeasureName=DriveTemp
Group=DriveTemp

[DriveTempString]
Meter=String
MeterStyle=BodyString | TempBarTempString
MeasureName=DriveTemp
Group=DriveTemp

;----------------------------------------------------------------------------
; Drive Access Graph
;----------------------------------------------------------------------------

[DriveWriteLine]
Meter=Line
MeterStyle=AccessGraph | AccessGraphLine | AccessGraphLineTop
MeasureName=DriveWriteAccess
Group=DriveGraph

[DriveWriteHistogram]
Meter=Histogram
MeterStyle=AccessGraph | AccessGraphHistogram | AccessGraphHistogramTop
MeasureName=DriveWriteAccess
Group=DriveGraph

[DriveReadLine]
Meter=Line
MeterStyle=AccessGraph | AccessGraphLine | AccessGraphLineBottom
MeasureName=DriveReadAccess
Group=DriveGraph

[DriveReadHistogram]
Meter=Histogram
MeterStyle=AccessGraph | AccessGraphHistogram | AccessGraphHistogramBottom
MeasureName=DriveReadAccess
Group=DriveGraph
