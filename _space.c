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
	char *tok = " ";
	char *tok2 = " ";
	while (str[i])
	{
		if (str[i] != tok[0] && str[i] != tok2[0])
		{
			rtn = 1;
			break;
		}
		i++;
	}
	return (rtn);
}
