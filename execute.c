#include "shell.h"

/**
 * execute - a function to execute a command
 * @str: the string to be passed
 */
void execute(char *str)
{
	char **args = NULL;
	pid_t child_pid;
	char *tok;
	int status;
	int i = 1;
	char *str2 = NULL;

	str2 = _strcpy(str, str2);

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error: ");
		free(str2);
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		printf("yoo");
		tok = strtok(str2, " ");
		
		while (tok != NULL)
		{
			i++;
			printf("%s", tok);
			tok = strtok(NULL, " ");
		}
		*args = malloc(sizeof(char *) * i);

		free(str2);
		tok = strtok(str, " ");
		i = 0;

		while (tok != NULL)
		{
			args[i] = tok;
			printf("%s", args[i]);
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
		wait(&status);
	}
}
