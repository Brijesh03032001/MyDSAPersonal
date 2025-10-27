#!/bin/bash

# Get the filename without extension
filename=$(basename "$1" .cpp)

# Compile and run with input/output redirection
g++ -o "$filename" "$1" && ./"$filename" < ../input.txt > ../output.txt

echo "Program executed successfully!"
echo "Input from: ../input.txt"
echo "Output to: ../output.txt"