#include "shell.h"

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char *command = NULL;
	size_t len = 0;

	while (1)
	{
		favour_print("sleek_shell$");
		getline(&command, &len, stdin);
		execute(command);
	}
	return (0);
}
