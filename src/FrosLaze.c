#include "Args_Checking.h"
#include "../include/FrosLaze.h"

int main(int argc, const char *argv[]){
	
	if (argc >= 2) {
		// Argument checking
		Arguments_Checking(argv);
	}else {
		printf("");
	}

	return 0;
}