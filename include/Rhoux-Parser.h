#ifndef RHOUX_PARSER_H
#define RHOUX_PARSER_H

#define VERSION "v1.0"
#include <stdio.h>

// Declaration for Rhoux-FrosLaze Functions
void Rhoux_FrosLaze(int _COUNT, char *_INPUT, int STATE);
void Rhoux_Generate(char *VALUE[]);
void Rhoux_Help(char *_VALUE);

void Rhoux_Args(int COUNT, char *_VALUE[]);
void Rhoux_Parser(char *_VALUE);
void Rhoux_Symbol(char *_VALUE[]);

void Rhoux_Version(char *_VALUE);
void Rhoux_Interrupt(int SIG_INTR);

#endif /* RHOUX_PARSER_H */