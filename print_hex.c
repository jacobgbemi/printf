#include "main.h"

/**
 * print_hex - prints an unsigned int in hexidecimal form
 * @ap: unsigned int to print
 * @c: flag to determine case of printing (0 = lower, 1 = upper)
 *
 * Return: number of digits printed
 */
char *print_hex(va_list ap, unsigned int c)
{
	unsigned int a[8];
	unsigned int i, m, sum, n;
	char diff, *str, *ptr;
	int count;

	n = va_arg(ap, unsigned int);

	m = 268435456; /* (16 ^ 7) */
	if (c)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	a[0] = n / m;
	for (i = 1; i < 8; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0, count = 0; i < 8; i++)
	{
		sum += a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
				str[i] = a[i];
			else
				str[i] = diff + a[i];
			count++;
		}
	}

	return (_strcpy(ptr, str));
}

/**
 * print_x - takes an unsigned int and prints it in lowercase hex notation
 * @x: unsigned int to print
 *
 * Return: number of digits printed
 */
char *print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}

/**
 * print_X - takes am unsigned int and prints it in uppercase hex notation
 * @X: unsigned int to print
 *
 * Return: number of digits printed
 */
char *print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}
