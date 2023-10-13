#include "shell.c"
/**
 * execute - a function to execute a command
 * @str: the string to be passed
 */
void execute(char *str)
{
	char *arg[];
	char *tok;
	int i = 0;
	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error:");
		exit(EXIT_FAILURE);
	}
	if (child_pid == 0)
	{
		tok = strtok(str, " ");
		while (tok != NULL)
		{
			arg[i] = tok;
			tok = strtok(NULL, " ");
			i++;
		}
		arg[i] = NULL;
		if (execve(arg[0], arg, NULL) == -1)
			perror("Error")
	}
	else
	{
		wait(NULL);
		exit(EXIT_SUCCESS);
	}
}
