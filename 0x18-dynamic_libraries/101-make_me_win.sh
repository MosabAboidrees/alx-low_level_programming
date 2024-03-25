#!/bin/bash
gcc -shared -o libgiga.so -fPIC winning_numbers.c
export LD_PRELOAD=./libgiga.so:$LD_LIBRARY_PATH
