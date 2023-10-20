#include <stdio.h>
#include "shell.h"
/**
 * _isspace - checks if a strings contains only spaces
 * @str: the string
 * Return: 0 if it contains only spaces
 * 1 if it contians something else
 */
int _isspace(char *str)
{
	int i = 0;
	int rtn = 0;

	while (str[i])
	{
		if (str[i] != " " && str[i] != "\n")
		{
			rtn = 1;
			break;
		}
		i++;
	}
	return (rtn);
}
