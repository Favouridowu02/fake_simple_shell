#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

int _strlen(char *str);
void favour_print(char *str);
void execute(char *str);
int *_strcpy(char *str1, char *str2);
int tok_count(char *str, char *delim);

#endif
