#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @ch: the character to be written
 * Return: 1 if successful
*/
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
