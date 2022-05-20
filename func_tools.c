#include "main.h"

/**
  * _putchar - write to stdout
  * @c: character to output
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
  * _strlen - print length of string
  * @str: string passed
  * Return: length as int
  */

int _strlen(char *str)
{
	int y = 0;

	while (str[y] != '\0')
		y++;
	return (y);
}

/**
  * _strcpy - copy from one file to another
  * @dest: destination
  * @src: source
  * Return: pointer to destination
  */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = *src;
	return (dest);
}

