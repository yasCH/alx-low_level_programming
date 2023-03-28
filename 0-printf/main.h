#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void _print_rev_recursion(char *s);
int convert_number(int n, int counter);
int printfbin(unsigned int b);
int arg_counter(const char *format);
int switching_function(const char *format, int printed_chars, va_list arg);
int printfoct(unsigned int num);

#endif /* _MAIN_H_ */
