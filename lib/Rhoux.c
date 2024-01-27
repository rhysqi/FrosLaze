
#include "../include/Rhoux-FrosLaze.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <signal.h>

#define MIN_COUNT (1 << 8)
#define MAX_COUNT (MIN_COUNT * 8)

// Rhoux-FrosLaze Functions
void Rhoux_Interrupt(int SIG_INTR) {
    exit(SIG_INTR);
}

void Rhoux_FrosLaze(int _COUNT, char *_INPUT, int STATE){

	char *_BUFF = (char *) malloc(sizeof(MAX_COUNT));

	if (_COUNT <= 1) {
	    printf("(=) Rhoux-FrosLaze build system %s (=)\n\n", VERSION);
		volatile int MSG[] = {-1, 2, 5};

		// System Service
		while (MSG[STATE] > 0) {

			printf("X= ");
			char *Base = fgets(_INPUT, MAX_COUNT, stdin);

			// Check arguments length
			if (strlen(Base) <= MAX_COUNT) {
				// Process Rhoux, Blaze, and Frost running
				if (Base != NULL) {
					char *BUFF = Base;
					Rhoux_Parser(Base);
				} else if (strcmp(Base, "^C")) {
					// Interrupt Signal
					Rhoux_Interrupt(1);
				}
			} else {
				printf("Arguments are limits for %d Characters \n", MIN_COUNT);
				exit(1);
			}
		}
	}
	else {
		exit(1);
	}
}

// Rhoux Arguments
void Rhoux_Args(int COUNT, char *_VALUE[]){
	// Arguments Checking
	COUNT = 1;
	Rhoux_Help(_VALUE[COUNT]);
	Rhoux_Version(_VALUE[COUNT]);
}
