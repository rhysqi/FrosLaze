# Rhoux-FrosLaze
Cross-Platform modern build system written in C. <br>
Suitable for small and complex project and also easy to use. <br>
Please read the PDF in docs folder for more information

| Filename | Description |
| - | -
| `.laze` | Stand for `blaze` file. The purpose for setup project structures, create library and compiler target.
| `.fros` | Stand for `frost` file. The purpose for compiler options, arguments and libraries linking.
| `.rfl`  | Stand for `rhoux` file. The purpose for binding `.laze` file and `.fros` file to build and build `multi/single` target using FrosLaze.

# Features
- Library searching
- Multi-target compiling
- Dependencies version lock
- Support multi compiler and interpreter

| Language | Tools | Support Version
| - | - | -
| C/C++ | Clang | v1.0 |
| Java | - | - |
| Python | - | - |
| Lua | - | - |


## How to use
- Runtime
```
FrosLaze
```
- Build-Only
```
FrosLaze build
```
- Setup
```
FrosLaze setup
```

# Tested Platform
- [x] FreeBSD 14
- [x] WIndows 11

# Manual Build and Toolchains
## Toolchains
```
Clang/LLVM 15
GNU makefile
```

## Build Software
### Windows
1. Create Folder Here
```
git clone https://github.com/rhysqi/Rhoux-FrosLaze.git
cd Rhoux-FrosLaze
mkdir build, bin, build/cache
```

2. Build
```
make buildware-win32
```

### FreeBSD
```
git clone https://github.com/rhysqi/Rhoux-FrosLaze.git
cd Rhoux-FrosLaze
make buildware
```

