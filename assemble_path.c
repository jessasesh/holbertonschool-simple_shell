#include "sss.h"

/**
 * append_to_str - Appends one string to another and returns result
 * @dest: destination string
 * @src: source string to append
 * Return: Concatenated string
 */
char *append_to_str(char *dest, char *src)
{
	char *temp = malloc(strlen(dest) + strlen(src) + 1);

	if (!temp)
	{
		return (NULL);
	}

	strcpy(temp, dest);
	strcat(temp, src);
	return (temp);
}

/**
 * assemble_path - Assembles complete file path
 * @paths: array of paths
 * @file: file to append
 * Return: Assembled file path
 */
char *assemble_path(char **paths, char *file)
{
	int i;
	char *path = NULL;

	if (access(file, F_OK) == 0)
	{
		return (file);
	}

	for (i = 0; paths[i] != NULL; i++)
	{

		path = malloc(strlen(paths[i]) + 1);

		strcpy(path, paths[i]);

		path = append_to_str(path, "/");

		path = append_to_str(path, file);

		if (access(path, F_OK) == 0)
		{
			return (path);
		}
	}
	return (NULL);
}
