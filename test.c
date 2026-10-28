#include "libreria.h"
#include <string.h>
#include <stdlib.h>


int main (int argc,char *argv[]){
    
    if (argc > 2 && strcmp(argv[1], "-head") == 0) {
        int n = atoi(argv[2]);
        head(n);
    }

    else if (argc == 2 && strcmp(argv[1], "-head") == 0) {
        head(10);
    }

    if (argc > 2 && strcmp(argv[1], "-tail") == 0) {
        int n = atoi(argv[2]);
        tail(n);
    }

    else if (argc == 2 && strcmp(argv[1], "-tail") == 0) {
        tail(10);
    }


    return 0;
}