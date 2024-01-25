# Rhoux-FrosLaze
Cross-Platform modern build system written in C. <br>
Suitable for small and complex project and also easy to use. <br>
Please read the PDF in docs folder for more information

| Filename | Description |
| - | -
| `.laze` | Stand for `blaze` file. The purpose for setup project structures, create library and compiler target.
| `.fros` | Stand for `frost` file. The purpose for compiler options, arguments and libraries linking.
| `.rfl`  | Stand for `rhoux` file. The purpose for binding `.laze` file and `.fros` file to build and build `multi/single` <br> target using FrosLaze.
  
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

# Features
- Library searching
- Multi-target compiling
- Dependencies version lock
- Support multi compiler and interpreter

