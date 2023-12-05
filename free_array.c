#include "sss.h"

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
