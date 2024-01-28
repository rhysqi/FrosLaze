
#include "../include/Rhoux-FrosLaze.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

const char *_DESC_t[] = {
	"build",
	"setup",
	"help",
	"version"
};

// Remove new line
void Rhoux_RM_Line(char *_STR, char _Remove) {
    int i, j;
    int len = strlen(_STR);

    for (i = 0, j = 0; i < len; i++) {
        if (_STR[i] != _Remove) {
            _STR[j++] = _STR[i];
        }
    }
    _STR[j] = '\0';  // Adding null character
}

void Rhoux_Setup(char _VALUE[]){
	Rhoux_RM_Line(_VALUE,'\n');
	if (strcmp(_VALUE, "setup") == 0) {
		printf("Rhoux-FrosLaze setup ...\n");
		
	}
}

void Rhoux_Build(char _VALUE[]){
	Rhoux_RM_Line(_VALUE,'\n');
	if (strcmp(_VALUE, "build") == 0) {
		printf("Rhoux-FrosLaze build ...\n");
		
	}
}

void Rhoux_End(char *_VALUE){
	if (strcmp(_VALUE, "exit") == 0) {
		printf("Rhoux-FrosLaze Terminated !\n");
		exit(1);
	}
}


// Rhoux Parsing Function
void Rhoux_Parser(int COUNT, char *_VALUE[]){
	// Rhoux Arguments
	
}

// Help Function
void Rhoux_Help(char *_VALUE){
	Rhoux_RM_Line(_VALUE,'\n');
	if (strcmp( _VALUE, _DESC_t[2]) == 0){
		printf("\n");

		printf("Available Options: \n");
		for (int x = 0; x < 4; ++x) {
			printf(" %s\n", _DESC_t[x]);
		}
		printf("\n");
	}
}

void Rhoux_Version(char *_VALUE){
	Rhoux_RM_Line(_VALUE,'\n');
	if (strcmp(_VALUE, _DESC_t[3]) == 0) {
		printf("\n");
		printf("Rhoux-FrosLaze Version: %s\n", VERSION);
		printf("\n");
	}
}