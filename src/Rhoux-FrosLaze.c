
#include "../include/Rhoux-FrosLaze.h"

int main(int argc, char *argv[]) {

	if (argc >= 2) {
	    Rhoux_Args(argc, argv);
	    Blaze_Args(argv);
	    Frost_Args(argv);
	} else {
	    Rhoux_FrosLaze(argc, *argv, 1);
	}

    return 0;
}