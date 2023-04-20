# 0x0F-function_pointers

This directory contains programs written in C language that demonstrate the use of function pointers in C.

## Files

* **0-print_name.c:** A C program that contains the function print_name which takes two parameters: a string name and a function pointer f. The function print_name prints Hello, [name] followed by a new line, where [name] is the value of the parameter name. The function pointer f is then used to print the string name in uppercase.

* **1-array_iterator.c:** A C program that contains the function array_iterator which takes three parameters: an array of integers array, the size of the array size, and a function pointer action. The function array_iterator iterates through the array array and applies the function action to each element of the array.

* **2-int_index.c:** A C program that contains the function int_index which takes three parameters: an array of integers array, the size of the array size, and a function pointer cmp. The function int_index searches for an integer in the array array using the function pointed to by cmp to compare the elements of the array. If the integer is found, the index of the first occurrence of the integer in the array is returned. If the integer is not found, the function returns -1.

* **3-op_functions.c:** A C program that contains the implementation of five arithmetic operations: addition, subtraction, multiplication, division, and modulo. Each operation is implemented as a function that takes two integers as parameters and returns the result of the operation.

* **3-get_op_func.c:** A C program that contains the function get_op_func which takes a character c as a parameter and returns a pointer to the function that corresponds to the operator represented by the character c.

* **3-calc.h:** A header file that contains the prototypes of all the functions used in the 3-op_functions.c and 3-get_op_func.c programs.

* **3-main.c:** A C program that contains the main function to execute the arithmetic operations.

* **100-main_opcodes.c:** A C program that prints the opcodes of its own main function.

* **function_pointers.h:** A header file that contains the prototypes of all the functions used in the 0-print_name.c, 1-array_iterator.c, and 2-int_index.c programs.

* **_putchar.c:** A C program that contains the implementation of the _putchar function
