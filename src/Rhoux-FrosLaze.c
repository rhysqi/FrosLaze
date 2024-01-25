
#include "../include/Rhoux-FrosLaze.h"

int main(int argc, char *argv[]){

    Rhoux_Args(argc, argv);
    Blaze_Args(argv);
    Frost_Args(argv);

    Rhoux_FrosLaze(argc,*argv, 1);

    return 0;
}