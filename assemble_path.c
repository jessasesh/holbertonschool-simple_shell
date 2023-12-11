#include "sss.h"

/**
 * append_to_str - Appends one string to another and returns result
 * @dest - The destination string
 * @src - The source string to append
 * @Return Concatenated string/ NULL
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
 * @paths - Array of paths
 * @file - file to append
 * @Return Assembled file path/ NULL
 */
char *assemble_path(char **paths, char *file)
{
	int i;
	char *path = NULL;

	printf("===assemble_path===\n");

	if (access(file, F_OK) == 0)
	{
		return (file);
	}

	printf("file = %s\n", file);

	for (i = 0; paths[i] != NULL; i++)
	{
		printf("top of for loop");

		path = malloc(strlen(paths[i]) + 1);

		strcpy(path, paths[i]);

		path = append_to_str(path, "/");

		printf("path (before strcat) = %s\n", path);

		path = append_to_str(path, file);
		printf("path (after strcat) = %s\n", path);
		if (access(path, F_OK) == 0)
		{
			printf("===assemble_path===SUCCESS\n");
			return (path);
		}
	}
	printf("===assemble_path===FAILURE\n");
	return (NULL);
}
