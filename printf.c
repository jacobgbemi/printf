#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...);
{
	va_list args;
	int e = 0;

	va_start(args,format);

	while (format[e] != '\0')
	{
		if (format[e] == '%')
			putchar(format[e]);
		else
		{	
	  	if (format[e + 1] == 'c')
			putchar(va_arg(args, int));
		}

		e++;
	}
	
	va_end(args);

	return (0);
}
