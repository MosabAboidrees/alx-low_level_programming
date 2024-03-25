#!/bin/bash
gcc -shared -o libhack.so -fPIC winning_numbers.c
export LD_PRELOAD=./libhack.so:$LD_LIBRARY_PATH
