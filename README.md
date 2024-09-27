# FrosLaze
Cross-Platform build system written in C. <br>
Suitable for small and complex project and also easy to use. <br>
Please read the PDF in docs folder for more information

| File Format | Description |
| - | -
| `.fros` | Compiler options, arguments and libraries linking.
| `.laze` | Setup project structures, create library and compiler target.
| `.scaf` | Extensions for create projects template

# Features
- Multithread build
- Dependencies version lock
- Support multi compiler and interpreter

# Project Templates
- [x] C
- [x] C++


## How to use
- Runtime
```
FrosLaze
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
git clone https://github.com/rhysqi/FrosLaze.git
cd FrosLaze
```

2. Build
```
make buildware-win32
```

### FreeBSD
```
git clone https://github.com/rhysqi/FrosLaze.git
cd FrosLaze
make buildware
```
