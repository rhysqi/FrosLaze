include tools/config.mk

# Static Archives
LL_ARC			=	llvm-ar rsU

# Lib archiving
LIB_Rhoux		=	build/Rhoux
LIB_Laze		=	build/Blaze
LIB_Fros		=	build/Frost

# Lib Output
LIB_Rhoux-o		=	build/Rhoux.o
LIB_Rhoux-o		+=	build/Rhoux-Arguments.o
LIB_Rhoux-o		+=	build/Rhoux-Symbol.o

LIB_Laze-o		+=	build/Blaze-Arguments.o
LIB_Laze-o		+=	build/Blaze-Symbol.o

LIB_Fros-o		+=	build/Frost-Arguments.o
LIB_Fros-o		+=	build/Frost-Symbol.o

LIB_Rhoux-obj	=	build/Rhoux.obj
LIB_Rhoux-obj	+=	build/Rhoux-Arguments.obj
LIB_Rhoux-obj	+=	build/Rhoux-Symbol.obj

LIB_Laze-obj	+=	build/Blaze-Arguments.obj
LIB_Laze-obj	+=	build/Blaze-Symbol.obj

LIB_Fros-obj	+=	build/Frost-Arguments.obj
LIB_Fros-obj	+=	build/Frost-Symbol.obj

# Export format
EXT_LIB			=	.lib
EXT_DLL			=	.dll

OUT_Rhoux		=	Rhoux
OUT_Blaze		=	Blaze
OUT_Frost		=	Frost

.PHONY: build-static build-shared build-static-win32 build-shared-win32 build_dir

# BUild target
build_dir:
	mkdir -p build

build-static: build_dir
	$(CC) $(CSTD) -c -static lib/Rhoux.c $(CFLAGS) $(CFBSD) -o build/Rhoux.o
	$(CC) $(CSTD) -c -static lib/Rhoux-Arguments.c $(CFLAGS) $(CFBSD) -o build/Rhoux-Arguments.o
	$(CC) $(CSTD) -c -static lib/Rhoux-Symbol.c $(CFLAGS) $(CFBSD) -o build/Rhoux-Symbol.o

	$(CC) $(CSTD) -c -static lib/Blaze-Arguments.c $(CFLAGS) $(CFBSD) -o build/Blaze-Arguments.o
	$(CC) $(CSTD) -c -static lib/Blaze-Symbol.c $(CFLAGS) $(CFBSD) -o build/Blaze-Symbol.o

	$(CC) $(CSTD) -c -static lib/Frost-Arguments.c $(CFLAGS) $(CFBSD) -o build/Frost-Arguments.o
	$(CC) $(CSTD) -c -static lib/Frost-Symbol.c $(CFLAGS) $(CFBSD) -o build/Frost-Symbol.o

	$(LL_ARC) $(LIB_Rhoux).a $(LIB_Rhoux-o)
	$(LL_ARC) $(LIB_Laze).a $(LIB_Laze-o)
	$(LL_ARC) $(LIB_Fros).a $(LIB_Fros-o)

build-shared: build-static
	$(CC) $(CSTD) -c -fPIE -shared lib/Rhoux.c $(CFLAGS) $(CFBSD) -o build/Rhoux.o
	$(CC) $(CSTD) -c -fPIE -shared lib/Rhoux-Arguments.c $(CFLAGS) $(CFBSD) -o build/Rhoux-Arguments.o
	$(CC) $(CSTD) -c -fPIE -shared lib/Rhoux-Symbol.c $(CFLAGS) $(CFBSD) -o build/Rhoux-Symbol.o

	$(CC) $(CSTD) -c -fPIE -shared lib/Blaze-Arguments.c $(CFLAGS) $(CFBSD) -o build/Blaze-Arguments.o
	$(CC) $(CSTD) -c -fPIE -shared lib/Blaze-Symbol.c $(CFLAGS) $(CFBSD) -o build/Blaze-Symbol.o

	$(CC) $(CSTD) -c -fPIE -shared lib/Frost-Arguments.c $(CFLAGS) $(CFBSD) -o build/Frost-Arguments.o
	$(CC) $(CSTD) -c -fPIE -shared lib/Frost-Symbol.c $(CFLAGS) $(CFBSD) -o build/Frost-Symbol.o

	$(CC) -shared $(LIB_Rhoux-o) $(LIB_Laze-o) $(LIB_Fros-o) $(CFBSD) $(CFLAGS) -o build/Rhoux-FrosLaze.so

# Windows make
build-lib-win32:
	$(CC) $(CSTD) -c -static lib/Rhoux.c $(CFLAGS) -o build/Rhoux.obj
	$(CC) $(CSTD) -c -static lib/Rhoux-Arguments.c $(CFLAGS) -o build/Rhoux-Arguments.obj
	$(CC) $(CSTD) -c -static lib/Rhoux-Symbol.c $(CFLAGS) -o build/Rhoux-Symbol.obj

	$(CC) $(CSTD) -c -static lib/Blaze-Arguments.c $(CFLAGS) -o build/Blaze-Arguments.obj
	$(CC) $(CSTD) -c -static lib/Blaze-Symbol.c $(CFLAGS) -o build/Blaze-Symbol.obj

	$(CC) $(CSTD) -c -static lib/Frost-Arguments.c $(CFLAGS) -o build/Frost-Arguments.obj
	$(CC) $(CSTD) -c -static lib/Frost-Symbol.c $(CFLAGS) -o build/Frost-Symbol.obj

build-static-win32: build-lib-win32
	$(LL_ARC) $(LIB_Rhoux).lib $(LIB_Rhoux-obj)
	$(LL_ARC) $(LIB_Laze).lib $(LIB_Laze-obj)
	$(LL_ARC) $(LIB_Fros).lib $(LIB_LIB_Fros-obj)

build-shared-win32:
	$(CC) $(CSTD) -c lib/Rhoux.c $(CFLAGS) -o build/Rhoux.obj
	$(CC) $(CSTD) -c lib/Rhoux-Arguments.c $(CFLAGS) -o build/Rhoux-Arguments.obj
	$(CC) $(CSTD) -c lib/Rhoux-Symbol.c $(CFLAGS) -o build/Rhoux-Symbol.obj

	$(CC) $(CSTD) -c lib/Blaze-Arguments.c $(CFLAGS) -o build/Blaze-Arguments.obj
	$(CC) $(CSTD) -c lib/Blaze-Symbol.c $(CFLAGS) -o build/Blaze-Symbol.obj

	$(CC) $(CSTD) -c lib/Frost-Arguments.c $(CFLAGS) -o build/Frost-Arguments.obj
	$(CC) $(CSTD) -c lib/Frost-Symbol.c $(CFLAGS) -o build/Frost-Symbol.obj

	$(CC) -shared $(LIB_Rhoux-obj) $(LIB_Laze-obj) $(LIB_Fros-obj) -o build/Rhoux-FrosLaze.dll -v

