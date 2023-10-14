#include "shell.h"
/**
 * execute - a function to execute a command
 * @str: the string to be passed
 */
void execute(char *str)
{
	char *args[2];
	
	args[0] = str;
	args[1] = NULL;

	if (execve(args[0], args, NULL) == -1)
	{
		perror("Error: ");
		exit(EXIT_FAILURE);
	}
}
