# include format.mk
include lib.mk

# C language configuration and compiler options
CC		=	clang15
CSTD	=	-std=c11

CFLAGS	=	-O3 -flto

CFLAGS	+=	-fno-fixed-point -fno-strict-aliasing -fno-exceptions \
			-fno-spell-checking -fno-rtti -fno-rtti-data -fno-access-control \
			-fno-addrsig -fno-cxx-modules -fno-declspec -fno-autolink \
			-fstandalone-debug

CFLAGS	+=	-fcf-protection -fcoverage-mapping -fstack-clash-protection \
			-fstrict-enums -fstack-protector-strong -fvectorize -fslp-vectorize \
			-fstrict-float-cast-overflow -fstrict-vtable-pointers -fsplit-lto-unit \
			-fconvergent-functions -fenable-matrix -fsplit-machine-functions \
			-fprofile-instr-generate 

CFLAGS	+=	-mstack-arg-probe -mstackrealign -msoft-float -mno-lvi-cfi \
			-mlvi-cfi -mlvi-hardening

CFLAGS	+=	-Wall -Wno-pedantic
CFLAGS	+=	-v

CLIBS	=	-I/usr/local/include -L/usr/local/lllvm/

SRC		=	src/Rhoux-FrosLaze.c
PROGRAM	=	FrosLaze

EXT		=	.exe

.PHONY: buildware buildware-win32

buildware:
	$(CC) $(CSTD) $(SRC) \
	$(CFLAGS) $(CLIBS) -D_FreeBSD  \
	-o $(PROGRAM)

buildware-win32:
	$(CC) $(CSTD) $(SRC) \
	$(CFLAGS) -D_WIN32 \
	-o $(PROGRAM)$(EXT)