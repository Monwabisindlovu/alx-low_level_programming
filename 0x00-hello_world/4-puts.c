#!/bin/bash
gcc -o program -xc - <<< 'int main() { puts("Programming is like building a multilingual puzzle\n"); return 0; }' && ./program; echo $?
