; Requires:
; RunCommand plugin: https://github.com/brianferguson/RunCommand.dll 

[PaletteRegistry]
Measure=Plugin
Plugin=RunCommand
Parameter=C:\Windows\System32\reg.exe query HKCU\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\Accent /v AccentPalette
OutputType=ANSI
FinishAction=[!UpdateMeasure "WindowsAccentColour"]
DynamicVariables=1

[WindowsAccentColourTrigger]
Measure=String
OnUpdateAction=[!CommandMeasure PaletteRegistry Run]
DynamicVariables=1
UpdateDivider=1

[WindowsAccentColour]
Measure=String
String=[PaletteRegistry]
DynamicVariables=1
RegExpSubstitute=1
Substitute="(?siU).*REG_BINARY\s*([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2})([[:xdigit:]]{2}).*":"\13\14\15"
