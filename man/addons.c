#include "shell.h"

/**
 * _strncmp - compares to string together
 * @str1: the first string
 * @str2: the second string
 * @len: the number of characters to be compared
 *
 * Return: returns 0 on success and -1 on failure
 */
int _strncmp(char *str1, const char *str2, int len)
{
	int i = 0;

	if (i < len)
	{
		while (i < len)
		{
			if (str1[i] == str2[i])
				i++;
			else
				return (-1);
		}
		return (0);
	}
	return (-1);
}

/**
 * printenv - prints all the environment
 * @env: the extern environ
 *
 * Return: always 0
 */
int printenv(char **env)
{
	int i;

	for (i = 0; env[i]; i++)
	{
		favour_print(env[i]);
		favour_print("\n");
	}
	return (0);
}

int freespace(char **arg, size_t i)
{
	while (i > 0)
	{
		free(arg[i]);
		i--;
	}
	free(arg);
	return (0);
}
