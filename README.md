### Installing MingGW 64-bit in Windows 10 or later
For detailed instructions, refer the official web page https://www.msys2.org/

Download the latest version of mingw installer https://github.com/msys2/msys2-installer/releases/download/2022-01-18/msys2-x86_64-20220118.exe

Launch the installer with install mingGW 64-bit with all defaults.

### Make sure the mingGW environment settings path is added to your system
1. From your windows start menu --> search for "env" then select "edit the system environment variables"
2. Add the PATH C:\msys64\mingw64\bin both system level and user level

### Launch mingGW command prompt
1. Windows start menu --> MYSYS2 64-bit --> MYSYS2 MSYS
2. g++ --version
3. gdb --version

### Install mingGW development tools
```
pacman -Syu
pacman -Su
pacman -S --needed base-devel mingw-w64-x86_64-toolchain
```
### Install Visual Studio code latest version of Editor
Refer the below instructions and install Visual Studio code and necessary extensions.
https://code.visualstudio.com/docs/cpp/config-mingw
