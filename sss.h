#ifndef SUPER_SIMPLE_SHELL
#define SUPER_SIMPLE_SHELL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

/*
 * Please sort libraries in a-z order
 */

char *readline(void);
int fork_process(char **tokens, char **envp);
char **tokenize_path(char **envp);
char *value_from_environ(char *envVar);
char **tokenize(char *str, char const *delim);
char *assemble_path(char **paths, char *file);
char *append_to_str(char *dest, char *src);

void print_array(char **array);
void free_array(char **arr);

void luma(void);

#endif
