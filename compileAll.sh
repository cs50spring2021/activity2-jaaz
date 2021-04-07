#!/bin/bash
# This is a bash script to automatically compile all three components of the guess6.c program

gcc -Wall -pedantic -std=c11 -ggdb guess6.c readline.c str2int.c  -o guess6
