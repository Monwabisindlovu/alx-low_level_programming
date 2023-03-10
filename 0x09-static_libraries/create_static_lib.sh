#!/bin/bash

# Create a static library from all .c files in current directory

# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library using all .o files generated
ar -rc liball.a *.o

# Index the static library for faster linking
ranlib liball.a

# Clean up the object files
rm -f *.o
