#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int print_string(char *str);
int _strlen(char *str);
int print_num(int num);
int print_hexa(int num);
int print_octal(int num);
int print_uint(unsigned int num);
int print_pointer(void *variable);

#endif