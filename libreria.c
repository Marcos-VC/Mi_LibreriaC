#include <stdio.h>
#include <string.h>

#define TAM_BUFFER 1024

int head(int N){
    
    char buffer[TAM_BUFFER];
    int lines;

    lines = 0;

    if(N <= 0 ){
        return -1;
    }
    else {
        while (fgets(buffer, sizeof(buffer), stdin) != NULL && lines < N){
            printf("%s",buffer);

            if(strchr(buffer, '\n')){
                lines++;
            }            
        }

        return 0;
    }
}