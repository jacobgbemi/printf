#include "main.h"
/**
  * _printf - build out the printf function
  * @format: string passed with possible format specifiers
  * Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	va_list ap;
	char *str, *buffer;
	int i = 0, j = 0, len = 0, total = 0;
	char* (*f)(va_list ap);

	buffer = string_buffer();
	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		len = buffer_overflow(buffer, len);
		if (format[i] != '%')
		{
			buffer[len++] = format[i++];
		}
		else
		{
			i++;
			if (format[i] == '%')
			{
				buffer[len++] = format[i];
			}
			else
			{
				f = select_func(format[i]);
				if (f != NULL)
				{
					str = f(ap);
					for (j = 0; str[j] != '\0'; j++)
					{
						buffer[len++] = str[j++];
					}
				}
			}
			total++;
		}
	}
	free(buffer);
	realloc_buffer(buffer, len, ap);
	return (total);
}





























































































