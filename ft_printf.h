#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>






size_t ft_strlen(const char *s);
void *ft_calloc(size_t nmemb , size_t size);
char *ft_itoa(int nb);
char *ft_int2hex(int nb);
int ft_printf(const char *str, ...);
#endif
