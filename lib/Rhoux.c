
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

// Rhoux Runtime Arguments
void Arguments_Runtime(int COUNT, char *_VALUE[]){
	// Arguments Checking
	int DATA = COUNT - 1;

	// Rhoux Check Arguments
	Rhoux_Build(_VALUE[DATA]);
	Rhoux_Help(_VALUE[DATA]);
	Rhoux_Version(_VALUE[DATA]);
	Rhoux_Setup(_VALUE[DATA]);
	Rhoux_End(_VALUE[DATA]);

}


void Rhoux_FrosLaze(char *_INPUT, int STATE){
	
	char *BUFF = _INPUT;
	volatile int MSG[] = { 0, 10, 5, -5};

	printf("(=) Rhoux-FrosLaze Build System (=)\n");
	while (MSG[STATE] < MSG[STATE-1]) {
		if (BUFF == NULL) {
			printf("X= \n");
		} else {
			printf("X= ");
			fgets(BUFF, 10, stdin);
			Arguments_Runtime(1,&BUFF);
		}
	}
}

// Rhoux Arguments
void Rhoux_Args(int COUNT, char *_VALUE[]){
	// Arguments Checking
	int DATA = COUNT - 1;
	Rhoux_Help(_VALUE[DATA]);
	Rhoux_Version(_VALUE[DATA]);
	Rhoux_Setup(_VALUE[DATA]);
	Rhoux_Build(_VALUE[DATA]);


}

