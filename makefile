CC		=	clang
CSTD	=	-std=c11

CFLAGS	=	-O3
CFLAGS	+=	-fno-fixed-point -fno-strict-aliasing -fno-exceptions \
			-fno-spell-checking -fno-rtti -fno-rtti-data -fno-access-control \
			-fno-addrsig -fno-gnu-inline-asm

CFLAGS	+=	-fstrict-enums -fstack-protector-strong -fvectorize -fslp-vectorize -fsplit-lto-unit \
			-fstrict-float-cast-overflow -fstrict-vtable-pointers \
			-fconvergent-functions -fenable-matrix

CFLAGS	+=	-mstack-arg-probe -mstackrealign -msoft-float -mno-lvi-cfi \
			-mlvi-cfi -mlvi-hardening

CFLAGS	+=	-Wall -Wno-pedantic
CFLAGS	+=	-v -H

SRC		=	src/Rhoux-FrosLaze.c
PROGRAM	=	Rhoux-FrosLaze

EXT		=	.exe

.PHONY: buildware buildware-win32

buildware:
	$(CC) $(CSTD) $(SRC) \
	$(CFLAGS) -o $(PROGRAM)

buildware-win32:
	$(CC) $(CSTD) $(SRC) \
	$(CFLAGS) -o $(PROGRAM)$(EXT)