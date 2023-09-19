#!/bin/bash
gcc -c -Wall -Werror *.c
ar rcs liball.a *.o
