#include "libreria.h"
#include <string.h>
#include <stdlib.h>


int main (int argc,char *argv[]){
    
    if (argc > 2 && strcmp(argv[1], "-head") == 0) {
        int n = atoi(argv[2]);
        head(n);
    }

    else if (argc == 2 && strcmp(argv[1], "-head") == 0) {
        int n = 10;
        head(n);
    }

    if (argc > 2 && strcmp(argv[1], "-tail") == 0) {
        int n = atoi(argv[2]);
        tail(n);
    }

    return 0;
}