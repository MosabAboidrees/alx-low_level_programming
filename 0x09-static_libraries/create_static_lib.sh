#!/bin/bash

# Compile each .c file into a corresponding .o file
gcc -c *.c

# Create the static library liball.a from all the .o files
ar -rc liball.a *.o

# Index the static library
ranlib liball.a

# Clean up the .o files
# rm -f *.o

echo "Static library liball.a created successfully."
