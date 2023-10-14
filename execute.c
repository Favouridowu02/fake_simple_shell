#include "shell.h"
/**
 * execute - a function to execute a command
 * @str: the string to be passed
 */
void execute(char *str)
{
	char *args[2];
	pid_t child_pid;
	int status;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error: ");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		args[0] = str;
		args[1] = NULL;

		if (execve(args[0], args, NULL) == -1)
		{
			perror("Error: ");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(&status);
	}
}
