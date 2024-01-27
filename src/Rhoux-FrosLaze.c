
#include "../include/Rhoux-FrosLaze.h"

int main(int argc, char *argv[2]) {

	if (argc <= 2) {
		// First Rhoux, Blaze, Frost Arguments Parsing
	    Rhoux_Args(argc,argv);
	} else if (argc >= 2) {
		printf("Arguments cannot more than %d !\n", argc);
	} else {
		// Go to system service
	    Rhoux_FrosLaze(argc, *argv, 1);
	}
    return 0;
}