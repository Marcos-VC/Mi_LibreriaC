#include "libreria.h"
#include <string.h>
#include <stdlib.h>


int main (int argc,char *argv[]){
    holaMundo();

    if (argc > 2 && strcmp(argv[1], "-head") == 0) {
        int n = atoi(argv[2]);
        head(n);
    }

    return 0;
}