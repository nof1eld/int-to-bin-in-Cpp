# Integer to Binary Converter

This C++ program converts a decimal integer to its binary representation using a linked list and recursion.

## Features

- Converts positive integers to binary
- Uses a linked list to store the binary digits
- Implements recursion for the conversion process
- Displays the binary representation
- Automatically frees allocated memory

## How to Use

1. Compile the program using a C++ compiler.
2. Run the executable.
3. Enter a positive decimal integer when prompted.
4. The program will display the binary representation of the input.

## Functions

- `fillLList`: Adds a new node to the beginning of the linked list.
- `displayBinaryLL`: Displays the binary representation and frees memory.
- `intToBin`: Converts integer to binary using recursion.

## Example

Enter a decimal number: 42 

Binary representation of 42 is: 101010


## Notes

- The program uses a linked list to store the binary digits in reverse order.
- Memory is dynamically allocated and freed to prevent leaks.
