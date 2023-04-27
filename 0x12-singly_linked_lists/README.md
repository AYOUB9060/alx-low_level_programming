# 0x12-singly_linked_lists

This directory contains the following files:

## Source files:

* **0-print_list.c:** C function that prints all the elements of a list_t list.
 * Prototype: size_t print_list(const list_t *h);
 * Return: the number of nodes in the list
 * Compilation: gcc -Wall -Werror -Wextra -pedantic --std=c89

* **1-list_len.c:** C function that returns the number of elements in a list_t list.
 * Prototype: size_t list_len(const list_t *h);
 * Compilation: gcc -Wall -Werror -Wextra -pedantic --std=c89

* **2-add_node.c:** C function that adds a new node at the beginning of a list_t list.
 * Prototype: list_t *add_node(list_t **head, const char *str);
 * Return: the address of the new element, or NULL if it failed
 * Compilation: gcc -Wall -Werror -Wextra -pedantic --std=c89

* **3-add_node_end.c:** C function that adds a new node at the end of a list_t list.
 * Prototype: list_t *add_node_end(list_t **head, const char *str);
 * Return: the address of the new element, or NULL if it failed
 * Compilation: gcc -Wall -Werror -Wextra -pedantic --std=c89

* **4-free_list.c:** C function that frees a list_t list.
 * Prototype: void free_list(list_t *head);
 * Compilation: gcc -Wall -Werror -Wextra -pedantic --std=c89

* **100-first.c:** C function that prints a sentence before the main function is executed.
 * Compilation: gcc -Wall -Werror -Wextra -pedantic --std=c89

* **101-hello_holberton.asm:** 64-bit assembly program that prints Hello, Holberton, followed by a new line. It uses the printf function.
 * Compilation: nasm -f elf64 -o 101-hello_holberton.o 101-hello_holberton.asm && gcc -no-pie -std=c99 -o helloholberton 101-hello_holberton.o -lc && rm 101-hello_holberton.o

### Header file:

* **lists.h:** Header file containing the definition of the list_t struct and the prototypes of all the functions used in this project.
