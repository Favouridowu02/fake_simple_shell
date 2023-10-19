#include "shell.h"

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(__attribute__((unused))int ac, char **av)
{
	char *command = NULL;
	size_t len = 0;
	ssize_t ngets;


	while (1)
	{
		favour_print("($) ");
		ngets = getline(&command, &len, stdin);
		if (ngets == -1 || _strncmp(command, "exit", 4) == 0)
		{
			free(command);
			favour_print("\n");
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
			execute(command, av[0]);
		}
	}

	free(command);
	return (0);
}
