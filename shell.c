#include "shell.h"
#include <stdbool.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char *command = NULL;
	size_t len = 0;
	ssize_t ngets;

	while (true)
	{
		favour_print("sleek_shell$ ");
		ngets = getline(&command, &len, stdin);
		if (ngets == -1)
		{
			favour_print("Bye\n");
			return (-1);
		}
		if (command != NULL)
		{
			command[_strlen(command) - 1] = '\0';
			execute(command);
		}
	}

	free(command);
	return (0);
}
