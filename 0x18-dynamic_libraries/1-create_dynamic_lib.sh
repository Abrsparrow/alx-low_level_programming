#!/bin/bash
gcc -fPIC -Wall -Werror -Wextra -pedantic -c *.c 
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
