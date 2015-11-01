[Variables]

;============================================================================
; General
;============================================================================

; Dimensions
WIDTH=275
SIDEBAR_WIDTH=26

; Icon tint
ICON_TINT=0, 187, 255, 220

; Padding
PADDING_TOP=5
PADDING_RIGHT=10
PADDING_BOTTOM=5
PADDING_LEFT=(#SIDEBAR_WIDTH# + 10)
PADDING_LINEBREAK=15r

;============================================================================
; Fonts
;============================================================================

; Sidebar Title
FONT1_NAME="hooge 05_53"
FONT1_SIZE=6
FONT1_COLOUR=255, 255, 255, 196

; Header
FONT2_NAME="Bavaria Extended"
FONT2_SIZE=6
FONT2_COLOUR=255, 255, 255, 200

; Body
FONT3_NAME="Bavaria Regular"
FONT3_SIZE=6
FONT3_COLOUR=255, 255, 255, 200

; Green
FONT3_COLOUR=93, 255, 0, 196

; Orange
FONT5_COLOUR=255, 157, 0, 220

; Red
FONT6_COLOUR=255, 38, 0, 220

; Blue
FONT7_COLOUR=0, 131, 255, 196

;============================================================================
; Colours
;============================================================================

; Background
COLOUR1=0, 0, 0, 196

; Sidebar
COLOUR2=0, 0, 0, 145

; Sidebar Separator
COLOUR3=0, 187, 255, 196

; Highlight
COLOUR4=96, 96, 96, 96

; Shadow
COLOUR5=0, 0, 0, 96

; Separator
COLOUR6=0, 187, 255, 196

; Bar Background
;COLOUR7=100, 100, 100, 50
COLOUR7=100, 100, 100, 32

; Volume Bar Steps
;COLOUR8=196, 196, 196, 196
COLOUR8=192, 192, 192, 128

; Line / Bar (Green)
COLOUR9=93, 255, 0, 196

; Line / Bar (Blue)
COLOUR10=0, 131, 255, 196

; Line / Bar (Orange)
COLOUR11=255, 157, 0, 220

; Line / Bar (Red)
COLOUR12=255, 38, 0, 220

; Histogram (Blue)
COLOUR13=0, 50, 100, 100

; Histogram (Green)
COLOUR14=0, 200, 0, 100

; Line / Bar (White)
COLOUR15=255, 255, 255, 220

; Histogram (White)
COLOUR16=255, 255, 255, 100

; Histogram (Red)
COLOUR17=255, 38, 0, 100

;============================================================================
; Panel
;============================================================================

[ModuleBodyHighlightTop]
Meter=IMAGE
X=1
Y=0
W=(#WIDTH# - 1)
H=1
SolidColor=#COLOUR4#

[ModuleBodyHighlightRight]
Meter=IMAGE
X=#WIDTH#
Y=0
W=1
H=(#HEIGHT# + 1)
SolidColor=#COLOUR4#
DynamicVariables=1

[ModuleBodyShadowBottom]
Meter=IMAGE
X=0
Y=#HEIGHT#
W=#WIDTH#
H=1
SolidColor=#COLOUR5#
DynamicVariables=1

[ModuleBodyShadowLeft]
Meter=IMAGE
X=0
Y=0
W=1
H=#HEIGHT#
SolidColor=#COLOUR5#
DynamicVariables=1

[ModuleBody]
Meter=IMAGE
X=#SIDEBAR_WIDTH#
Y=1
W=(#WIDTH# - #SIDEBAR_WIDTH#)
H=(#HEIGHT# - 1)
SolidColor=#COLOUR1#
DynamicVariables=1

;============================================================================
; Sidebar
;============================================================================

[ModuleSidebar]
Meter=IMAGE
SolidColor=#COLOUR2#
X=1
Y=1
H=(#HEIGHT# - 1)
W=(#SIDEBAR_WIDTH# - 2)
DynamicVariables=1

[ModuleSidebarSeparator]
Meter=IMAGE
SolidColor=#COLOUR3#
;SolidColor=[WindowsAccentColour]
X=(#SIDEBAR_WIDTH# - 1)
Y=1
H=(#HEIGHT# - 1)
W=1
DynamicVariables=1
;UpdateDivider=1
DynamicVariables=1

[ModuleTitleStyle]
Meter=String
X=3
Y=30
StringAlign=Right
Angle=-1.5707
FontFace=#FONT1_NAME#
FontSize=#FONT1_SIZE#
FontColor=#FONT1_COLOUR#
AntiAlias=#AA#

[ModuleIconStyle]
Meter=IMAGE
ImagePath=#@#\Icons\
X=5
Y=5
Greyscale=1
ImageTint=#ICON_TINT#
;ImageTint=[WindowsAccentColour]
DynamicVariables=1
;UpdateDivider=1

;============================================================================
; Meter Styles
;============================================================================

;----------------------------------------------------------------------------
; General
;----------------------------------------------------------------------------

[HeaderString]
Meter=STRING
FontFace=#FONT2_NAME#
FontSize=#FONT2_SIZE#
FontColor=#FONT2_COLOUR#
AntiAlias=#AA#

[BodyString]
Meter=STRING
FontFace=#FONT3_NAME#
FontSize=#FONT3_SIZE#
FontColor=#FONT3_COLOUR#
AntiAlias=#AA#

[SizeString]
AutoScale=1
NumOfDecimals=#NUM_DECIMAL_PLACES#
UpdateDivider=2

[NewLine]
X=0r
Y=#PADDING_LINEBREAK#

[Clip]
ClipString=2
ClipStringH=15

;----------------------------------------------------------------------------
; Processor Usage Bar Block
;----------------------------------------------------------------------------

[ProcUsageBarString]
X=(#PADDING_LEFT# + 23)
Y=20r
StringAlign=Right
FontColor=#COLOUR9#
NumOfDecimals=0
Text="%1%"
UpdateDivider=1

[ProcUsageBarBack]
X=(#PADDING_LEFT# + 30)
Y=2r
W=(#WIDTH# - #PADDING_LEFT# - #PADDING_RIGHT# - 60)
H=10
SolidColor=#COLOUR7#
AntiAlias=#AA#

[ProcUsageBar]
X=0r
Y=0r
W=(#WIDTH# - #PADDING_LEFT# - #PADDING_RIGHT# - 60)
H=10
BarColor=#COLOUR9#
BarOrientation=HORIZONTAL
AntiAlias=#AA#
UpdateDivider=1

[ProcUsageBarTempString]
StringAlign=Right
X=(#WIDTH# - #PADDING_RIGHT#)
Y=-2r
FontColor=#COLOUR11#
Text="%1 '#TEMP_UNIT#"
UpdateDivider=2

;----------------------------------------------------------------------------
; Processor Graph Block
;----------------------------------------------------------------------------

[ProcGraph]
H=45
W=(#WIDTH# - #SIDEBAR_WIDTH# - 2)
AntiAlias=#AA#
UpdateDivider=1

[ProcGraphLine]
X=(#SIDEBAR_WIDTH# + 1)
Y=20r
SolidColor=#COLOUR7#
LineCount=1
LineColor=#COLOUR9#

[ProcGraphHistogram]
X=0r
Y=0r
PrimaryColor=#COLOUR14#

[ProcGraphTempLine]
X=0r
Y=0r
H=44
W=(#WIDTH# - #SIDEBAR_WIDTH# - 2)
LineCount=1
LineColor=#COLOUR11#
AntiAlias=#AA#
UpdateDivider=2

;----------------------------------------------------------------------------
; Thread Usage Bar Block
;----------------------------------------------------------------------------

[ThreadUsageBarTitle]
X=(#PADDING_LEFT# + 23)
Y=6r
StringAlign=Right

[ThreadUsageBarBack]
X=(#PADDING_LEFT# + 30)
Y=5r
W=(#WIDTH# - #PADDING_LEFT# - #PADDING_RIGHT# - 30)
H=5
SolidColor=#COLOUR7#
AntiAlias=#AA#

[ThreadUsageBar]
X=0r
Y=0r
W=(#WIDTH# - #PADDING_LEFT# - #PADDING_RIGHT# - 30)
H=5
BarColor=#COLOUR10#
BarOrientation=HORIZONTAL
AntiAlias=#AA#
UpdateDivider=1

;----------------------------------------------------------------------------
; Usage Bar Block
;----------------------------------------------------------------------------

[UsageBarUsedString]
X=#PADDING_LEFT#
Y=20r
Text="Used: %1"

[UsageBarFreeString]
X=(#WIDTH# - #PADDING_RIGHT#)
Y=0r
StringAlign=RIGHT
Text="Free: %1"

[UsageBarString]
X=#PADDING_LEFT#
Y=#PADDING_LINEBREAK#
FontColor=#COLOUR9#
Text="%1%"
Percentual=1

[UsageBarBack]
X=(#PADDING_LEFT# + 35)
Y=4r
W=(#WIDTH# - #PADDING_LEFT# - #PADDING_RIGHT# - 35)
H=6
SolidColor=#COLOUR7#

[UsageBar]
X=0r
Y=0r
W=(#WIDTH# - #PADDING_LEFT# - #PADDING_RIGHT# - 35)
H=6
BarColor=#COLOUR9#
BarOrientation=HORIZONTAL
UpdateDivider=2

[UsageBarTotalString]
X=(#WIDTH# - #PADDING_RIGHT#)
Y=10r
StringAlign=RIGHT
Text="Total: %1"

;----------------------------------------------------------------------------
; Usage Graph Block
;----------------------------------------------------------------------------

[UsageGraph]
W=(#WIDTH# - #SIDEBAR_WIDTH# - 2)
H=30
AntiAlias=#AA#
MaxValue=100
UpdateDivider=1

[UsageGraphLine]
X=(#SIDEBAR_WIDTH# + 1)
Y=20r
SolidColor=#COLOUR7#
LineCount=1
LineColor=#COLOUR9#

[UsageGraphHistogram]
X=0r
Y=0r
PrimaryColor=#COLOUR14#

;----------------------------------------------------------------------------
; Temp Bar Block
;----------------------------------------------------------------------------

[TempBarString]
X=#PADDING_LEFT#
Y=20r
Text="Temp"

[TempBarBack]
X=(#PADDING_LEFT# + 30)
Y=6r
W=(#WIDTH# - #PADDING_LEFT# - #PADDING_RIGHT# - 60)
H=5
SolidColor=#COLOUR7#
AntiAlias=#AA#

[TempBar]
X=0r
Y=0r
W=(#WIDTH# - #PADDING_LEFT# - #PADDING_RIGHT# - 60)
H=5
BarColor=#COLOUR11#
BarOrientation=HORIZONTAL
AntiAlias=#AA#
MaxValue=#TEMP_MAX#
MinValue=0
AutoScale=0
UpdateDivider=2

[TempBarTempString]
StringAlign=Right
X=(#WIDTH# - #PADDING_RIGHT#)
Y=-2r
FontColor=#COLOUR11#
Text="%1 '#TEMP_UNIT#"
UpdateDivider=2

;----------------------------------------------------------------------------
; Access Graph
;----------------------------------------------------------------------------

[AccessGraph]
H=23
W=(#WIDTH# - #SIDEBAR_WIDTH# - 2)
AutoScale=0
AntiAlias=#AA#
UpdateDivider=1

[AccessGraphLine]
SolidColor=#COLOUR7#
LineCount=1

[AccessGraphHistogram]
X=0r
Y=0r

[AccessGraphLineTop]
X=27
Y=19r
LineColor=#COLOUR12#

[AccessGraphHistogramTop]
PrimaryColor=#COLOUR17#

[AccessGraphLineBottom]
X=0r
Y=24r
LineColor=#COLOUR9#
Flip=1

[AccessGraphHistogramBottom]
PrimaryColor=#COLOUR14#
Flip=1
