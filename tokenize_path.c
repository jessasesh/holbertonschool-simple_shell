#include "sss.h"

/**
 * tokenize_path - Turns the PATH env into an array of strings
 *
 * @envp: Environmental variables
 *
 * Return: Array of paths (strings)
 */

char **tokenize_path(char **envp)
{
	char *pathsString = NULL;
	char **pathsTokens = NULL;
	int i = 0;
	char *path = "PATH=";

	if (!envp)
	{
		return (NULL);
	}

	printf("===tokenize_path===\n");

	while (strncmp(envp[i], path, strlen(path)) != 0)
	{
		i++;
	}

	pathsString = malloc(strlen(envp[i]) + 1);

	if (!pathsString)
	{
		return (NULL);
	}
	strcpy(pathsString, envp[i]);
	printf("%s\n", pathsString);

	pathsString = value_from_environ(pathsString);

	pathsTokens = tokenize(pathsString, ":");

	printf("===tokenize_path===SUCCESS\n");

	return (pathsTokens);
}
