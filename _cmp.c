#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"
/**
 * _strcmp - compares two strings if they are identical
 * @str1: first string
 * @str2: second string
 * Return: 0 if they are identical
 * 1 if they are not identical
 */
int _strcmp(char *str1, char *str2)
{
	size_t j;
	int rtn_val = 0;
	size_t lstr1, lstr2;

	lstr1 = lenOfStr(str1);
	lstr2 = lenOfStr(str2);
	for (j = 0; j < lstr1; j++)
	{
		if (j >= lstr2)
		{
			rtn_val = 1;
			break;
		}
		if (str1[j] == str2[j])
			continue;
		else
		{
			rtn_val = 1;
			break;
		}
	}
	for (j = 0; j < lstr2; j++)
	{
		if (j >= lstr1)
		{
			rtn_val = 1;
			break;
		}
		if (str2[j] == str1[j])
			continue;
		else
		{
			rtn_val = 1;
			break;
		}
	}
	return (rtn_val);
}
