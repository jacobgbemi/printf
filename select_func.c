#include "main.h"
/**
  * select_func - select and return the matched function
  * @c: argument parameter used to pick the function
  * Return: Pointer to picked function
  */

char* (*select_func(char c))(va_list)
{
	switch (c)
	{
	case 'c':
		return (print_char);
	case 's':
		return (print_str);
	case 'i':
		return (print_int);
	case 'd':
		return (print_int);
	default:
		return (NULL);
	}
	return (NULL);
}
