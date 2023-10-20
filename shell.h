#ifndef SHELL_H
#define SHELL_H

#define UNUSED __attribute__((unused))

extern char **environ;

char **_exitshell(char *str);
size_t lenOfStr(char *str);
size_t getTokLen(char *str, char *delim);
char *_strdup(char *str);
char **_strtok(char *str, char *delim, size_t *length);
char *ff_in_path(char *str);
char *_strcpy(char *dest, char *src);
int shell(char **av);
int _isspace(char *str);
int _strcmp(char *str1, char *str2);

#endif
