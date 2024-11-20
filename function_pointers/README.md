# Function Pointers in C
This repository contains examples and exercises related to function pointers in the C programming language. Function pointers are a powerful feature in C that allow you to store the address of a function in a variable and call the function using that variable.

## Table of Contents

- [Function Pointers in C](#function-pointers-in-c)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Usage](#usage)
  - [Examples](#examples)
  - [Exercises](#exercises)
  - [Author](#author)

## Introduction

Function pointers provide a way to pass functions as arguments to other functions, return functions from functions, and store functions in data structures. They are essential for implementing callback functions and designing flexible APIs.

## Usage

To use function pointers, you need to declare a pointer to a function with a specific signature. Here is an example:

```c
#include <stdio.h>

void my_function(int a) {
    printf("Value: %d\n", a);
}

int main() {
    void (*func_ptr)(int) = my_function;
    func_ptr(10);
    return 0;
}
```

In this example, `func_ptr` is a pointer to a function that takes an `int` as an argument and returns `void`.

## Examples

This repository includes several examples demonstrating the use of function pointers:

1. **Basic Function Pointer**: A simple example showing how to declare and use a function pointer.
2. **Array of Function Pointers**: An example of storing multiple function pointers in an array.
3. **Callback Functions**: Demonstrating how to use function pointers for callbacks.
4. **Function Pointer as Argument**: Passing function pointers as arguments to other functions.

## Exercises

To practice using function pointers, try the following exercises:

1. Write a program that uses a function pointer to call different mathematical operations (addition, subtraction, multiplication, division) based on user input.
2. Implement a sorting algorithm that takes a comparison function pointer to sort an array of integers in ascending or descending order.
3. Create a menu-driven program that uses an array of function pointers to execute different menu options.

## Author

Jonas

Happy coding!
