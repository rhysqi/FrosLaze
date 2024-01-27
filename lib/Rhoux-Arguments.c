
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


// Rhoux Parsing Function
void Rhoux_Parser(char *_VALUE){
	
	Rhoux_RM_Line(_VALUE,'\n');

	// Rhoux Arguments
	Rhoux_Version(_VALUE);
}

// Help Function
void Rhoux_Help(){
	printf("Available Options: \n");
	for (int x = 0; x < 3; ++x) {
		printf("%s \n", _DESC_t[x]);
		}
}

void Rhoux_Version(char *_VALUE){
	if (strcmp(_VALUE, _DESC_t[3]) == 0) {
		printf("Rhoux-FrosLaze Version: %s\n", VERSION);
	}
}

void Rhoux_Args(int COUNT, char *_VALUE[]){
	// Arguments Checking
	if (strcmp( _VALUE[1], _DESC_t[2]) == 1) {
		Rhoux_Help();
	}
}