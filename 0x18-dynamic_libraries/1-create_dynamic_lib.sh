#!/bin/bash

# Convert the files to object files.
gcc *.c -c -fPIC
# Put them in the library
gcc *.o -shared -o liball.so
