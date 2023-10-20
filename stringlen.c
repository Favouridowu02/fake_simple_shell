#include <stdio.h>
#include "shell.h"
/**
 * lenOfStr - gets the length of a string
 * @str: the string to work on
 * Return: the length of the string
 */
size_t lenOfStr(char *str)
{
	size_t i = 0;

	while (str[i])
		i++;
	return (i);
}
