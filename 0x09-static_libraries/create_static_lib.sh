#!/bin/bash

# Compile each .c file into object files
for file in *.c; do
    gcc -c "$file" -o "${file%.c}.o"
done

# Create the static library
ar rcs liball.a *.o

# Clean up the object files
rm *.o

echo "Static library liball.a created successfully."

