#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @str: string beingf checked
 * Return: length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	if (!str)
	{
		return (0);
	}

	while (*str++)
	{
		i++;
	}
	return (i);
}

/**
 * _strcmp - performs alphabetic comparison of two strings.
 * @s1: string one
 * @s2: string two
 * Return: comparison result
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 < *s2 ? -1 : 1);
	}
}

/**
 * starts_with - checks if needle starts with haystack
 * @haystack: string to search
 * @needle: substring being searched
 * Return: address of next char of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
	{
		if (*needle++ != *haystack++)
		{
			return (NULL);
		}
	}
	return ((char *)haystack);
}

/**
 * _strcat - concatenates two strings
 * @dest: string destination
 * @src: string source
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *pointr = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = *src;
	return (pointr);
}
