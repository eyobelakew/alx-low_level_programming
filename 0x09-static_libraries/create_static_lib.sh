#!/bin/bash

# Compile all C files in the current directory into object files with warnings enabled
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create a static library named liball.a from the object files
ar -rc liball.a *.o

# Index the library for faster linking
ranlib liball.a

# Clean up the object files
rm *.o

# Print a success message
echo "Static library liball.a has been created."