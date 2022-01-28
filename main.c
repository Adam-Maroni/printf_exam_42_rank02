#include "ft_printf.h"


int main(void)
{
	int printf_rt_value = 0;
	int ftprintf_rt_value = 0;

	printf("--------------------------CASE 1--------------------------\n");
	printf_rt_value = printf("%d%d%d\n",1,2,3);
	ftprintf_rt_value = ft_printf("%d%d%d\n",1,2,3);
	if (printf_rt_value != ftprintf_rt_value)
	{
		printf("ERROR \n");
		printf("printf_rt_value = %d\n", printf_rt_value);
		ft_printf("ftprintf_rt_value = %d\n", ftprintf_rt_value);
	}
	else
		printf("Correct\n");
//---------------------------------------------------------------------------------
	printf("--------------------------CASE 2--------------------------\n");
	printf_rt_value = printf("Voila la valeur de %d %s %x\n", INT_MAX, "en hexadecimal : ", INT_MAX);
	ftprintf_rt_value = ft_printf("Voila la valeur de %d %s %x\n", INT_MAX, "en hexadecimal : ", INT_MAX);
	if (printf_rt_value != ftprintf_rt_value)
	{
		printf("ERROR \n");
		printf("printf_rt_value = %d\n", printf_rt_value);
		ft_printf("ftprintf_rt_value = %d\n", ftprintf_rt_value);
	}
	else
		printf("Correct\n");
//---------------------------------------------------------------------------------
	printf("--------------------------CASE 3--------------------------\n");
	printf_rt_value = printf("Voila la valeur de %d %s %x\n", INT_MIN, "en hexadecimal : ", INT_MIN);
	ftprintf_rt_value = ft_printf("Voila la valeur de %d %s %x\n", INT_MIN, "en hexadecimal : ", INT_MIN);
	if (printf_rt_value != ftprintf_rt_value)
	{
		printf("ERROR \n");
		printf("printf_rt_value = %d\n", printf_rt_value);
		ft_printf("ftprintf_rt_value = %d\n", ftprintf_rt_value);
	}
	else
		printf("Correct\n");
//---------------------------------------------------------------------------------
	printf("--------------------------CASE 4--------------------------\n");
	printf_rt_value = printf("%x\n", 42);
	ftprintf_rt_value = ft_printf("%x\n", 42);
	if (printf_rt_value != ftprintf_rt_value)
	{
		printf("ERROR \n");
		printf("printf_rt_value = %d\n", printf_rt_value);
		ft_printf("ftprintf_rt_value = %d\n", ftprintf_rt_value);
	}
	else
		printf("Correct\n");
//---------------------------------------------------------------------------------
	printf("--------------------------CASE 5--------------------------\n");
	printf_rt_value = printf("%x\n", -42);
	ftprintf_rt_value = ft_printf("%x\n", -42);
	if (printf_rt_value != ftprintf_rt_value)
	{
		printf("ERROR \n");
		printf("printf_rt_value = %d\n", printf_rt_value);
		ft_printf("ftprintf_rt_value = %d\n", ftprintf_rt_value);
	}
	else
		printf("Correct\n");
//---------------------------------------------------------------------------------
	printf("--------------------------CASE 6--------------------------\n");
	printf_rt_value = printf("%x\n", (unsigned int)INT_MAX + 1);
	ftprintf_rt_value = ft_printf("%x\n", (unsigned int)INT_MAX + 1);
	if (printf_rt_value != ftprintf_rt_value)
	{
		printf("ERROR \n");
		printf("printf_rt_value = %d\n", printf_rt_value);
		ft_printf("ftprintf_rt_value = %d\n", ftprintf_rt_value);
	}
	else
		printf("Correct\n");
//---------------------------------------------------------------------------------
	printf("--------------------------CASE 7--------------------------\n");
	printf_rt_value = printf("%x\n", (unsigned int)INT_MIN - 1);
	ftprintf_rt_value = ft_printf("%x\n", (unsigned int)INT_MIN - 1);
	if (printf_rt_value != ftprintf_rt_value)
	{
		printf("ERROR \n");
		printf("printf_rt_value = %d\n", printf_rt_value);
		ft_printf("ftprintf_rt_value = %d\n", ftprintf_rt_value);
	}
	else
		printf("Correct\n");
//---------------------------------------------------------------------------------
	printf("--------------------------CASE 8--------------------------\n");
	printf_rt_value = printf("NULL %s NULL %x NULL %d\n", NULL, NULL, NULL);
	ftprintf_rt_value = ft_printf("NULL %s NULL %x NULL %d\n", NULL, NULL, NULL);
	if (printf_rt_value != ftprintf_rt_value)
	{
		printf("ERROR \n");
		printf("printf_rt_value = %d\n", printf_rt_value);
		ft_printf("ftprintf_rt_value = %d\n", ftprintf_rt_value);
	}
	else
		printf("Correct\n");
//---------------------------------------------------------------------------------
	return (0);
}
