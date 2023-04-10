# 9-static_libraries

This directory contains source code files and a script related to static libraries in C programming language.

## Files 

**libmy.a**
+ A static library containing the following functions:
* int _putchar(char c);
* int _islower(int c);
* int _isalpha(int c);
* int _abs(int n);
* int _isupper(int c);
* int _isdigit(int c);
* int _strlen(char *s);
* void _puts(char *s);
* char *_strcpy(char *dest, char *src);
* int _atoi(char *s);
* char *_strcat(char *dest, char *src);
* char *_strncat(char *dest, char *src, int n);
* char *_strncpy(char *dest, char *src, int n);
* int _strcmp(char *s1, char *s2);
* char *_memset(char *s, char b, unsigned int n);
* char *_memcpy(char *dest, char *src, unsigned int n);
* char *_strchr(char *s, char c);
* unsigned int _strspn(char *s, char *accept);
* char *_strpbrk(char *s, char *accept);
* char *_strstr(char *haystack, char *needle);

**create_static_lib.sh**
A shell script that creates a static library named `liball.a` from all the `.c` files that are in the current directory.

## Usage

+ To create `libmy.a`:
1. gcc -Wall -Werror -Wextra -pedantic -c *.c
2. ar -rc libmy.a *.o
3. ranlib libmy.a

+ to create `liball.a`:
* ./create_static_lib.sh
