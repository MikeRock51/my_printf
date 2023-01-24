#include "printf.h"

int my_printf(char *restrict format, ...)
{
    va_list args;
    int i = 0, j, length = 0;

    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            j = i + 1;
            if (format[j] == 'd' || format[j] == 'i')
                length += print_num(va_arg(args, int));
            else if (format[j] == 's')
                length += print_string(va_arg(args, char *));
            else if (format[j] == 'c')
                length += _putchar(va_arg(args, int));
            else if (format[j] == 'x')
                length += print_hexa(va_arg(args, int));
            else if (format[j] == 'p')
                length += print_pointer(va_arg(args, void *));
            else if (format[j] == 'o')
                length += print_octal(va_arg(args, int));
            else if (format[j] == 'u')
                length += print_uint(va_arg(args, unsigned int));
            else
                length += _putchar(format[i]);
            i++;
        }
        else 
            length += _putchar(format[i]);
        i++;
    }
    return (length);
}