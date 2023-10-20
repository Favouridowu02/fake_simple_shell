#include <stdio.h>
#include "shell.h"
/**
 * main - simple shell main function
 * @ac: argument count
 * @av: argument vector
 * Return: Always 0.
 */
int main(UNUSED int ac, char **av)
{
	shell(av);
	return (0);
}
