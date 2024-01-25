
#include "../include/Rhoux-FrosLaze.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void Rhoux_Version(int COUNT, char *_VALUE[]){

}

void Rhoux_Help(int COUNT, char *_VALUE[]){

	const char *_HELP_t[] = {
		"build", 
		"setup",
		"version",
	};

	const char *_DESC_t[] = {
		"build", 
		"setup",
		"version",
	};

	if (strcmp(_VALUE[1], "help") == 0) {
		printf("%s \n", *_HELP_t);
	}
}

void Rhoux_Args(int COUNT, char *_VALUE[]){
	if (strcmp(_VALUE[1], "build") == 0) {
		printf("Rhoux-FrosLaze Building ...\n");
	} else if (strcmp(_VALUE[1], "setup") == 0) {
		printf("Rhoux-FrosLaze project setup ...\n");
	}
}