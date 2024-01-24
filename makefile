CC		=	clang15
CSTD	=	-std=c11 

CARGS	=	-O3
CARGS	+=	-fno-strict-aliasing

SRC		=	src/Rhoux-FrosLaze.c
PROGRAM	=	Rhoux-FrosLaze

buildware:
	$(CC) $(CSTD) $(SRC) \
	$(CARGS)