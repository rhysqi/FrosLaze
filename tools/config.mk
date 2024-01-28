
# C language configuration and compiler options
CC			=	clang
CSTD		=	-std=c11

CFLAGS		=	-O3 -nostdinc++

CFLAGS		+=	-fno-fixed-point -fno-strict-aliasing -fno-exceptions \
				-fno-spell-checking -fno-rtti -fno-rtti-data -fno-access-control \
				-fno-addrsig -fno-cxx-modules \
				-fstandalone-debug

CFLAGS		+=	-fcf-protection -fcoverage-mapping -fstack-clash-protection \
				-fstrict-enums -fstack-protector-strong -fvectorize -fslp-vectorize \
				-fstrict-float-cast-overflow -fstrict-vtable-pointers -fsplit-lto-unit \
				-fconvergent-functions -fenable-matrix \
				-fprofile-instr-generate

CFLAGS		+=	-mstack-arg-probe -mstackrealign -msoft-float -mno-lvi-cfi \
				-mlvi-cfi -mlvi-hardening

CFLAGS		+=	-Wall -Wno-pedantic
CFLAGS		+=