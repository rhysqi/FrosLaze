#ifndef RHOUX_FROSLAZE_H
#define RHOUX_FROSLAZE_H

#include "Frost-Parser.h"
#include "Blaze-Parser.h"

#define VERSION "v1.0"

// Declaration for Rhoux-FrosLaze Functions
void Rhoux_FrosLaze(int _COUNT, char *_INPUT, int STATE);
void Rhoux_Args(int COUNT, char *_VALUE[]);
void Rhoux_Generate(char *VALUE[]);
void Rhoux_Parser(char *_VALUE[]);
void Rhoux_Symbol(char *_VALUE[]);


#endif /* RHOUX_FROSLAZE_H */