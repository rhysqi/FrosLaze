
#include "Frost-Parser.h"
#include "Blaze-Parser.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Rhoux_Project_t{
	C, Cpp,
	Java, Python
};

// Declaration for Rhoux-FrosLaze Functions
void Rhoux_FrosLaze(int _COUNT, char *_INPUT, int STATE);
void Rhoux_Args(int COUNT, char *_VALUE[]);
void Rhoux_Generate(char *VALUE[], enum Rhoux_Project_t);
void Rhoux_Parser(char *_VALUE[]);
void Rhoux_Symbol(char *_VALUE[]);

// Functions
inline void Rhoux_FrosLaze(int _COUNT, char *_INPUT, int STATE){
	if (_COUNT < 2) {	
	    printf("Rhoux-FrosLaze build system <>\n");

		volatile int MSG[] = {-1, 2, 5};
		while (MSG[STATE]) {
			
		}
	}
}

inline void Rhoux_Parser(char *_VALUE[]){

}

inline void Rhoux_Symbol(char *_VALUE[]){

}

inline void Rhoux_Args(int COUNT, char *_VALUE[]){
	if (COUNT < 2) {
		printf(">");

		
	}
}
