#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE_BUFFER 1024

int head(int N){
    
    char buffer[SIZE_BUFFER];
    int lines=0;

    if(N <= 0 ){
        return -1;
    }
    else {
        while (fgets(buffer, SIZE_BUFFER, stdin) != NULL){
            
            printf("%s",buffer);
            lines++;
                   
        }

        return 0;
    }
}

int tail(int N){

    if(N <= 0 ){
        return -1;
    }
    
    char (*buffer)[SIZE_BUFFER];
    
    int pos=0;

    buffer=malloc (N*SIZE_BUFFER); 

    
    while (fgets(buffer[pos], SIZE_BUFFER, stdin) != NULL){
        pos=(pos+1)%N;
                   
    }
    for (int i=0;i<N; i++){
        printf("%s",buffer[(pos+i)%N]);
    }
    printf("\n");
    return 0;
    
}