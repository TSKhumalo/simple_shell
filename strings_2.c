#include "shell.h"

/**
 * _strcpy - copies a string
 * @dest: string destination
 * @src: string source
 * Return: pointer to string dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
	{
		return (dest);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer to duplicated string
 */
char *_strdup(const char *str)
{
	int len = 0;
	char *pointr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str++)
	{
		length++;
	}
	pointr = malloc(sizeof(char) * (len + 1));
	if (!pointr)
	{
		return (NULL);
	}
	for (len++; len--;)
	{
		pointr[len] = *--str;
	}
	return (pointr);
}

/**
 *_puts - prints an input string
 *@str: string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	if (!str)
	{
		return;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: if success = 1
 * If error, return = -1 and errno is set appropriately.
 */
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
	{
		buf[i++] = c;
	}
	return (1);
}
