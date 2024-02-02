#ifndef main_H
#define main_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int _printf(const char *format, ...);
char *printstringspecifier(char *p);
const char *printstr(const char *str);
int printchar(int ch);
int printnum(int num);
#endif
