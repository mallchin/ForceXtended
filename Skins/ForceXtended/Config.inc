[Variables]

;============================================================================
; ForceXtended Configuration File
;
; Edit the options below to customise this skin for your setup.
;============================================================================


;============================================================================
; General
;============================================================================

; Stylesheets are over-written when upgrading this skin.  If you intend on
; editing the stylesheet you may wish to copy it use your custom one here.
; Stylesheets are stored in "@Resources\Stylesheets".
STYLESHEET=Default

; Anti-Alias (Enable = 1 / Disable = 0)
AA=0

; Number of decimal places to use for size strings
NUM_DECIMAL_PLACES=1

; Unit to display temperatures in.  Valid vales are "C", "F" and "K".
TEMP_UNIT=C

; Maximum temperature (in the temperature unit defined above).
TEMP_MAX=100


;============================================================================
; Blank
;============================================================================

; Sets the height of the "Blank" module (this can come in useful if you want
; the skin to fill the whole height of the screen).
BLANK_HEIGHT=10


;============================================================================
; CPU
;
; SpeedFan provides sensory data for fans, temperatures and the like.  You'll
; need to download and install a copy for some features to work.
; 
;============================================================================

; Number of cores/threads to display. Valid values are "0", "2", "4", "6",
; "8" or "%NUMBER_OF_PROCESSORS%" (to choose automatically).
CPU_CORES=%NUMBER_OF_PROCESSORS%

; Set to relevant SpeedFan's IDs for your setup
SF_CPU_TEMP=2


;============================================================================
; DateTime
;============================================================================

; Format to 12h or 24 clock.  Valid values are "12" or "24".
CLOCK_HOURS=24


;============================================================================
; Drives
;
; SpeedFan provides sensory data for fans, temperatures and the like.  You'll
; need to download and install a copy for some features to work.
; Download: http://www.almico.com/speedfan.php
;============================================================================

; These will generally by the corresponding drive letter, but you can do more
; exotic things in Windows like mount drives onto drives, in which case the
; drive may not have a drive letter, and you can reference the mount point
; instead.  For example, you may store you Steam folder on another drive, in
; which case you'll need something like this to see it:
; Z_DRIVE_MOUNT=C:\Program Files (x86)\Steam
A_DRIVE_MOUNT=A:
B_DRIVE_MOUNT=B:
C_DRIVE_MOUNT=C:
D_DRIVE_MOUNT=D:
E_DRIVE_MOUNT=E:
F_DRIVE_MOUNT=F:
G_DRIVE_MOUNT=G:
H_DRIVE_MOUNT=H:
I_DRIVE_MOUNT=I:
J_DRIVE_MOUNT=J:
K_DRIVE_MOUNT=K:
L_DRIVE_MOUNT=L:
M_DRIVE_MOUNT=M:
N_DRIVE_MOUNT=N:
O_DRIVE_MOUNT=O:
P_DRIVE_MOUNT=P:
Q_DRIVE_MOUNT=Q:
R_DRIVE_MOUNT=R:
S_DRIVE_MOUNT=S:
T_DRIVE_MOUNT=T:
U_DRIVE_MOUNT=U:
V_DRIVE_MOUNT=V:
W_DRIVE_MOUNT=W:
X_DRIVE_MOUNT=X:
Y_DRIVE_MOUNT=Y:
;Z_DRIVE_MOUNT=Z:
Z_DRIVE_MOUNT=C:\Program Files (x86)\Steam

; Set to relevant SpeedFan's IDs for your setup.  You can hide a temperature
; by setting the value to "-1".
SF_A_DRIVE_TEMP=0
SF_B_DRIVE_TEMP=0
SF_C_DRIVE_TEMP=8
SF_D_DRIVE_TEMP=0
SF_E_DRIVE_TEMP=0
SF_F_DRIVE_TEMP=0
SF_G_DRIVE_TEMP=0
SF_H_DRIVE_TEMP=0
SF_I_DRIVE_TEMP=0
SF_J_DRIVE_TEMP=0
SF_K_DRIVE_TEMP=0
SF_L_DRIVE_TEMP=0
SF_M_DRIVE_TEMP=0
SF_N_DRIVE_TEMP=0
SF_O_DRIVE_TEMP=0
SF_P_DRIVE_TEMP=0
SF_Q_DRIVE_TEMP=0
SF_R_DRIVE_TEMP=0
SF_S_DRIVE_TEMP=0
SF_T_DRIVE_TEMP=0
SF_U_DRIVE_TEMP=0
SF_V_DRIVE_TEMP=0
SF_W_DRIVE_TEMP=0
SF_X_DRIVE_TEMP=0
SF_Y_DRIVE_TEMP=0
SF_Z_DRIVE_TEMP=9


;============================================================================
; GPU
;
; Requires MSI Afterburner Plugin available here:
; http://forums.guru3d.com/showthread.php?t=319558
;============================================================================

; Title for the GPU module
GPU_NAME="nVidia GeForce GTX 980 Strix @ 1.279GHz"

; Set to your GPU's memory (in Mb)
GPU_MEMORY=4096

; MSI Afterburner returns size in Mb -- we'll multiple to get bytes
GPU_MEMORY_MULTIPLIER=1048576

; Set to relevant SpeedFan's IDs for your setup
SF_GPU_TEMP=0


;============================================================================
; MediaPlayer
;
; For a list of supported media players see:
; http://docs.rainmeter.net/manual/plugins/nowplaying/
;============================================================================

; Your media player
MEDIA_PLAYER=iTunes


;============================================================================
; Network
;============================================================================

; Your network interface's number
INTERFACE=0

; Windows XP users should set this to "TCP"
; Windows Vista or above users should set this to "TCPv4"
TCP_VERSION=TCPv4

; Address to use for ping queries
PING_ADDRESS=www.google.co.uk

; Max ping timeout
PING_TIMEOUT=30000


;============================================================================
; Wi-Fi
;
; Note: Windows XP SP2 using Wi-Fi will need to install the KB918977 hotfix.
;============================================================================

; Your WiFi interface's number
WIFI_INTERFACE=0
