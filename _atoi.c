#include "shell.h"
/**
 * interactive - checks if shell is interactive mode
 * @info: struct address
 * Return: 1 if interactive mode, else 0.
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 *_isalpha - checks if character is an alphabet
 *@c: input character
 *Return: 1 if c is alphabetic, else 0.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * is_delim - checks if character is a delimiter
 * @c: character to check
 * @delim: delimeter string
 * Return: if true = 1, else = 0
 */
int is_delim(char c, char *delim)
{
	while (*delim)
	{
		if (*delim++ == c)
		{
			return (1);
		}
	}
	return (0);
}

/**
 *_atoi - converts string to integer
 *@s: string to be converted
 *Return: 0 if no numbers in string, else converted number
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, display;
	unsigned int res = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			res *= 10;
			res += (s[i] - '0');
		}
		else if (flag == 1)
		{
			flag = 2;
		}
	}

	if (sign == -1)
	{
		display = -res;
	}
	else
	{
		display = res;
	}

	return (display);
}
