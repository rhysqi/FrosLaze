
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

// Help Function
void Rhoux_Help(int COUNT, char *_VALUE[]){
	printf("Available Options: \n");
	for (int x = 0; x < 3; ++x) {
		printf("%s \n", _DESC_t[x]);
		}
}

void Rhoux_Version(int argc, char *_VALUE[]){
	printf("Rhoux-FrosLaze Version: %s\n", VERSION);
}

void Rhoux_Args(int COUNT, char *_VALUE[]){
	// Arguments Checking
	
}