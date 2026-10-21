#!/bin/bash

gcc -Wall -Wextra -c libreria.c -o libreria.o

ar rcs liblibreria.a libreria.o
gcc -Wall -Wextra test.c -L. -llibreria -o test
rm libreria.o

exit 0 