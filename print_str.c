#include "main.h"

/**
  * print_str - print string as string
  * @ap: string to print
  * Return: string
  */

char *print_str(va_list ap)
{
	char *ptr, *copy_string;
	int len;

	char *str = va_arg(ap, char*);

	len = _strlen(str);

	ptr = malloc(sizeof(char) * len + 1);
	copy_string = _strcpy(ptr, str);

	if (ptr == NULL)
		return (NULL);

	return (copy_string);
}
