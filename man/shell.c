#include "shell.h"
#include <signal.h>

void signalHandle(__attribute__((unused))int sig_num)
{
	signal(SIGINT, signalHandle);
	favour_print("\n($) ");
	fflush(stdout);
}

/**
 * main - entry point
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: always 0
 */
int main(__attribute__((unused))int ac, char **av)
{
	char *command = NULL;
	size_t len = 0;
	ssize_t ngets;
	int interactive = isatty(STDIN_FILENO);

	while (1)
	{
		signal(SIGINT, signalHandle);
		if (interactive)
			favour_print("($) ");
		ngets = getline(&command, &len, stdin);
		if (_strncmp(command, "\n", 1) == 0)
			continue;
		if (ngets == -1 || _strncmp(command, "exit", 4) == 0)
		{
			if (ngets == -1)
				favour_print("\n");
			free(command);
			return (-1);
		}
		if (_strncmp(command, "env", 3) == 0)
		{
			printenv(environ);
			continue;
		}
		if (command != NULL)
		{
			command[_strlen(command) - 1] = '\0';
			if (command[_strlen(command) - 1] == '\n')
				command[_strlen(command) - 1] = '\0';
			execute(command, av[0]);
		}
	}

	free(command);
	return (0);
}
