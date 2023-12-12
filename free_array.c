#include "sss.h"

/**
 * free_array - frees memory allocated for an array of strings
 * @array: array of strings to be freed
 */
void free_array(char **array)
{
	if (array && *array)
	{
		free(*array);
	}
	if (array)
	{
		free(array);
	}
}
