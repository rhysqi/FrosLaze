
#include "../include/Rhoux-FrosLaze.h"

int main(int argc, char *argv[]) {

	if (argc >= 2) {
		// First Rhoux, Blaze, Frost Arguments Parsing
	    Rhoux_Args(argc,argv);

	} else {
	    Rhoux_FrosLaze(argc, *argv, 1);
	}

    return 0;
}