#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

extern char **environ;

int _strncmp(char *str1, const char *str2, int len);
int _strlen(char *str);
void favour_print(char *str);
void execute(char *str);
int *_strcpy(char *str1, char *str2);
int tok_count(char *str, char *delim);
int printenv(char **env1);
int freespace(char **arg, size_t i);

#endif
