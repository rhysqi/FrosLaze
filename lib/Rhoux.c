
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

	if (_COUNT < 2) {
	    printf("(=) Rhoux-FrosLaze build system %s (-)\n", VERSION);
		volatile int MSG[] = {-1, 2, 5};

		// System Service
		while (MSG[STATE] > 0) {

			printf("X= ");
			char *Base = fgets(_INPUT, MAX_COUNT, stdin);

			// Check arguments length
			if (*Base <= sizeof(char *[MAX_COUNT])) {
				// Process Rhoux, Blaze, and Frost running
				if (Base != NULL) {
					char *BUFF = Base;
					Rhoux_Parser(&BUFF);

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
}

// Rhoux Parsing Function
void Rhoux_Parser(char *_VALUE[MAX_COUNT]){

	char *BUFF_P = _VALUE[MAX_COUNT];

	// Rhoux Parsing Function Bindings
	Rhoux_Args(0, &BUFF_P);
	Rhoux_Symbol(&BUFF_P);

	// Rhoux Parsing Function Bindings
	Blaze_Parser(&BUFF_P);
	Blaze_Args(&BUFF_P);
	Blaze_Symbol(&BUFF_P);

	// Frost Parsing Function Bindings
	Frost_Parser(&BUFF_P);
	Frost_Args(&BUFF_P);
	Frost_Symbol(&BUFF_P);

	free(BUFF_P);
}