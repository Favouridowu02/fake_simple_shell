#include "shell.h"

int allocate_memory(char ***args, char *str);
/**
 * execute - a function to execute a command
 * @program_name: the program name
 * @str: the string to be passed
 */
void execute(char *str, char *program_name)
{
	char **args;
	pid_t child_pid;
	int status, count_tok, i = 0;
	char *tok;

	count_tok = allocate_memory(&args, str);
	if (count_tok == 0 || args == NULL)
		return;
	child_pid = fork();
	if (child_pid == -1)
	{
		perror(program_name);
		free(args);
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		tok = strtok(str, "	 ");
		for (; tok != NULL; i++)
		{
			args[i] = tok;
			tok = strtok(NULL, "	 ");
		}
		args[i] = NULL;
		if (execve(args[0], args, NULL) == -1)
		{
			perror(program_name);
			exit(EXIT_FAILURE);
		}
		freespace(args, i);
	}
	else
	{
		wait(&status);
		freespace(args, i);
	}
}

/**
 * allocate_memory - allocates memory for the args
 * @args: the pointer to strings
 * @str: the string gotten from getline
 *
 * Return: returns count_tok
 */
int allocate_memory(char ***args, char *str)
{
	int count_tok;
	char *str2 = malloc(sizeof(char) * (_strlen(str) + 1));

	if (str2 == NULL)
	{
		return (0);
	}
	_strcpy(str, str2);
	count_tok = tok_count(str2, " ");
	*args = malloc(sizeof(char *) * (count_tok + 1));
	free(str2);

	if (count_tok == 0)
		free(*args);
	return (count_tok);
}
