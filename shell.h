#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

extern char **environ;
void signl(int sign);
void interactive(int argc, char **argv);
void non_interactive(int argc, char **argv);
char *read_input(void);
char **parse_args(char *read);
void cmd_builtin(char *read, char **parsed);
int c_builtin(char **parsed);
int cmd_access(char *argv, char **parsed, int r);
int _fork(char **parsed);
void execute_cmd(char **parsed);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *str);
char *_strdup(char *str);
#endif
