# Pet-spoon
Pet Spoon sim C++ real 2027
## C++ Version Credits
Made by 5quirre1 and Nomaakip
## Python Version Credits
Made by wishyt13
## Build Instructions
### For Windows
You will need to install Visual Studio Community first, then open the Developer Command Prompt for VS (1).
Once you are in, make sure your `spoon.cpp` file is in your directory, then run `cl spoon.cpp`, if successful, you should see no errors and you will have a `spoon.exe` in your directory you are in.
### For Linux
You will need to run `sudo apt install g++` first, then enter your password (there will be no password for live usbs).
If you have `g++` installed or you installed it (if you do not have it installed), make sure your `spoon.cpp` file is in your directory, then run `g++ spoon.cpp`, if successful, you should see no errors and you will have a `a.out` in your directory you are in.
### For Android
#### Windows
You will need to install the Android NDK first, make sure its in the directory that has no spaces or else it will not work.
Once you have the Android NDK installed, navigate to `toolchains\llvm\prebuilt\windows-x86_64\bin` in your NDK folder, then run the command you want to build for the architecture:
For 32-bit ARM Devices, `armv7a-linux-androideabi21-clang++ -o spoon spoon.cpp`.
For 64-bit ARM Devices, `aarch64-linux-android21-clang++ -o spoon spoon.cpp`.
For x86 Devices, `i686-linux-android21-clang++ -o spoon spoon.cpp`.
If successful, you should see no errors and you will have a 'spoon` file in your directory you are in.
