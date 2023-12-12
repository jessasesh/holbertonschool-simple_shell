#include "sss.h"

/**
* fork_process - forks process and executes a command.
* @tokens: array of strings command and its arguments.
* @environ: array of strings environmental variables
* Return: 0 on success, 1 on failure.
*/ 

int fork_process(char **tokens, char **environ)
{
	pid_t mypid;
	int status;

	char *pathName = tokens[0];

	/*printf("===fork_process===\n");*/

	printf("pathName = %s\n", pathName);

	mypid = fork();

	if (mypid == -1)
	{
		perror("Unable to fork");
		/*printf("==Terminating shell==\n");*/
		return (1);
	}
	if (mypid == 0)
	{
		printf("===child===\n");
		environ = tokenize_path(environ);
		printf("(child) environ = %s\n", *environ);
		printf("(child) pathName (before) = %s\n", pathName);
		pathName = assemble_path(environ, pathName);
		printf("(child) pathName (after) = %s\n", pathName);
		if (execve(pathName, tokens, environ) == -1)
		{
			perror("Unable to execute command");
			exit(EXIT_FAILURE);
		}
		exit(EXIT_SUCCESS);
	}
	if (mypid)
	{
		wait(&status);
		printf("I'm the parent process: %lu\n", (unsigned long)mypid);
		return (0);
	}
	return (1);
}
