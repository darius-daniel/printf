#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string.
 * Return: number of characters printed (excluding the null byte)
*/
int _printf(const char *format, ...)
{
	int countChars = 0, state = 0;

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
				state = 1;
			else
				_putchar(*format), countChars++;
		}
		else if (state == 1)
		{
			if (*format == '%')
				_putchar('%'), countChars++;
			
			state = 0;
		}
		format++;
	}
	return (countChars);
}
