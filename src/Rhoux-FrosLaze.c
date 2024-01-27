
#include "../include/Rhoux-FrosLaze.h"

int main(int argc, char *argv[]) {

	if (argc >= 2) {
		// Rhoux Arguments Parsing
	    Rhoux_Args(argc,argv);
	    Rhoux_Help(argc,argv);

		// Blaze Arguments Parsing

		// Frost Arguments Parsing
	} else {
	    Rhoux_FrosLaze(argc, *argv, 1);
	}

    return 0;
}