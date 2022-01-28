#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>




size_t ft_strlen(const char *s)
{
	int i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

void *ft_calloc(size_t nmemb , size_t size)
{
	char *rt = NULL;
	size_t i = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	if (!(rt = (char *)malloc(nmemb * size)))
		return (NULL);
	while (i < nmemb)
	{
		rt[i] = '\0';
		i++;
	}
	return ((void *)rt);
}

char *ft_itoa(int nb)
{
	int i = 0;
	int y = 0;
	int sign = 1;
	unsigned int new_nb = nb;
	char *revert = NULL;
	char *rt = NULL;

	if (nb < 0)
	{
		sign = -1;
		new_nb = -nb;
	}
	if (!(revert = (char *)ft_calloc(20, sizeof(char))))	
		return (NULL);
	if (nb == 0)
	{
		revert[0] = '0';
		return (revert);
	}
	while (new_nb > 0)
	{
		revert[i] = '0' + (new_nb % 10);
		i++;
		new_nb /= 10;
	}
	if (!(rt = (char *)ft_calloc(20, sizeof(char))))	
	{
		free(revert);
		return (NULL);
	}
	if (sign == -1)
	{
		rt[0] = '-';
		y = 1;
	}
	while (--i >= 0)
	{
		rt[y] = revert[i];
		y++;
	}
	free(revert);
	return (rt);
}


char *ft_int2hex(int nb)
{
	int i = 0;
	int y = 0;
	unsigned int new_nb = nb;
	char *revert = NULL;
	char *rt = NULL;
	char *hex = "0123456789abcdef";

	if (!(revert = (char *)ft_calloc(20, sizeof(char))))	
		return (NULL);
	if (nb == 0)
	{
		revert[0] = '0';
		return (revert);
	}
	while (new_nb > 0)
	{
		revert[i] = hex[new_nb % 16];
		i++;
		new_nb /= 16;
	}
	if (!(rt = (char *)ft_calloc(20, sizeof(char))))	
	{
		free(revert);
		return (NULL);
	}
	while (--i >= 0)
	{
		rt[y] = revert[i];
		y++;
	}
	free(revert);
	return (rt);
}

int ft_printf(const char *str, ...)
{
	va_list args;
	int counter = 0;
	char *tmp = NULL;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1) == 'd')
		{
			tmp = ft_itoa(va_arg(args, int));	
			write(1, tmp, ft_strlen(tmp) * sizeof(char));
			counter += ft_strlen(tmp);
			free(tmp);
			tmp = NULL;
			str += 2;
		}
		else if (*str == '%' && *(str + 1) == 'x')
		{
			tmp = ft_int2hex(va_arg(args, int));
			write(1, tmp, ft_strlen(tmp) * sizeof(char));
			counter += ft_strlen(tmp);
			free(tmp);
			tmp = NULL;
			str += 2;
		}
		else if (*str == '%' && *(str + 1) == 's')
		{
			tmp = va_arg(args, char *);
			write(1, tmp, ft_strlen(tmp) * sizeof(char));
			counter += ft_strlen(tmp);
			tmp = NULL;
			str += 2;
		}
		else
		{
			write(1, str, sizeof(char));
			counter++;
			str++;
		}
	}
	va_end(args);
	return (counter);
}
