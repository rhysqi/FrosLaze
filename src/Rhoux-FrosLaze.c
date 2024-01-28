
#include "../include/Rhoux-FrosLaze.h"

int main(int argc, char *argv[2]) {

	if (argc == 2) {
		// First Rhoux, Blaze, Frost Arguments Parsing
	    Rhoux_Args(argc,argv);
	} else if (argc == 1) {
		// Go to system service
	    Rhoux_FrosLaze(*argv, 2);
	} else {
		printf("Arguments cannot more than %d !\n", argc);
	}
    return 0;
}