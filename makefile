include tools/config.mk
include tools/format.mk
include tools/lib.mk

# Platform Version Dependent
VERSION		=	15

# FreeBSD C Options
CFBSD		=	-fsplit-machine-functions -fno-autolink -fno-declspec \

CLIBFBSD	=	-I/usr/local/include -L/usr/local/lllvm/

# Target
SRC			=	src/Rhoux-FrosLaze.c
PROGRAM		=	bin/FrosLaze

EXT			=	.exe

# Linking
LIB_LINK	=	-L .\build\Rhoux-FrosLaze.dll \
				.\build\Blaze.lib .\build\Frost.lib .\build\Rhoux.lib

.PHONY: buildware buildware-win32

buildware: build-shared
	$(CC)$(VERSION) $(CSTD) $(SRC) -flto \
	$(LIB_Rhoux).a $(LIB_Laze).a $(LIB_Fros).a build/Rhoux-FrosLaze.so \
	$(CFBSD) $(CFLAGS) $(CLIBFBSD) -D_FreeBSD  \
	-o $(PROGRAM)

buildware-win32: build-shared-win32
	$(CC) $(CSTD) $(SRC) $(LIB_LINK) \
	$(CFLAGS) -D_WIN32 \
	-o $(PROGRAM)$(EXT)