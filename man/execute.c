#include "shell.h"

/**
 * execute - a function to execute a command
 * @str: the string to be passed
 */
void execute(char *str)
{
	char **args;
	pid_t child_pid;
	char *tok;
	size_t count_tok;
	int status;
	int i = 0;
	char *str2 = malloc(sizeof(char) * (_strlen(str) + 1));

	_strcpy(str, str2);
	count_tok = tok_count(str2, " ");
	if (count_tok == 0)
		return;
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error: ");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		args = malloc(sizeof(char *) * (count_tok + 1));
		tok = strtok(str, " ");
		while (tok != NULL)
		{
			args[i] = tok;
			tok = strtok(NULL, " ");
			i++;
		}

		args[i] = NULL;
		if (execve(args[0], args, NULL) == -1)
		{
			perror("Error: ");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		freespace(args, i);
		wait(&status);
	}
}
