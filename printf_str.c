#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
        va_list args;

        int i =0;
        char *p;
        int e=0;

        va_start(args, format);

        while (format[i] != '\0')
        {
                if(format[i] != '%')
                        _putchar(format[i]);
                else if(format[i+1] == 's')
                {
                p =(va_arg(args, char*));
                e=0;

                while(p[e] != '\0')
                {
                        _putchar(p[e]);
                        e++;
                }
        i++;
                }
                i++;
        }
        va_end(args);

        return (0);

}

