# Simple_Shell 

# Introduction


## What is it?
A shell is a program that provides a command-line interface for users to interact with the computer's operating system. It allows users to execute commands and run programs by typing text commands.

<details>
<summary> More info </summary>
<br>
  
- Who designed and implemented the original Unix operating system
- Who wrote the first version of the UNIX shell
- Who invented the B programming language (the direct predecessor to the C programming language)
- Who is Ken Thompson
- How does a shell work
- What is a pid and a ppid
- How to manipulate the environment of the current process
- What is the difference between a function and a system call
- How to create processes
- What are the three prototypes of main
- How does the shell use the PATH to find the programs
- How to execute another program with the execve system call
- How to suspend the execution of a process until one of its children terminates
- What is EOF / “end-of-file”?

</details>

## Project Requirements
<details>
<summary>General</summary>
<br>

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the option `Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/main/betty-doc.pl)
- Your shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded
</details>

<details>
<summary>Allowed Functions/System Calls</summary>
<br>

- all functions from string.h
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- printf (man 3 printf)
- fprintf (man 3 fprintf)
- vfprintf (man 3 vfprintf)
- sprintf (man 3 sprintf)
- putchar (man 3 putchar)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)
</details>


## How to download and use

- [Click this link](https://github.com/jessasesh/holbertonschool-simple_shell)

- Download files or copy the clone URL

  <img src="https://github.com/jessasesh/holbertonschool-simple_shell/assets/126801159/e3411512-177a-4f8b-8fc4-c1b21f88be73" width="50%" height="50%">

### Compiler
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
### Contents and functions used
Function Name|Syntax|Description|
|----------|----------|-----------|
|[super_simple_shell.c](https://github.com/jessasesh/holbertonschool-simple_shell/blob/master/super_simple_shell.c)|int main(int argc, char **argv, char **envp)|Main|
|[readline.c](https://github.com/jessasesh/holbertonschool-simple_shell/blob/master/readline.c)|char *readline(void)|Reads user input|
|[tokenize.c](https://github.com/jessasesh/holbertonschool-simple_shell/blob/master/tokenize.c)|char **tokenize(char *str, char const *delim)|Coverts input for processing|
|[tokenize_path.c](https://github.com/jessasesh/holbertonschool-simple_shell/blob/master/tokenize_path.c)|char **tokenize_path(char **envp)|Converts path|
|[value_from_environ.c](https://github.com/jessasesh/holbertonschool-simple_shell/blob/master/value_from_environ.c)|char *value_from_environ(char *envVar)|Handles environment variable|
|[assemble_path.c](https://github.com/jessasesh/holbertonschool-simple_shell/blob/master/assemble_path.c)|char *append_to_str(char *dest, char *src)|Appends strings|
|[print_array.c](https://github.com/jessasesh/holbertonschool-simple_shell/blob/master/print_array.c)|void print_array(char **array)|Prints elements of string|
|[fork_process.c](https://github.com/jessasesh/holbertonschool-simple_shell/blob/master/fork_process.c)|int fork_process(char **tokens, char **environ)|Executes Program|
|[free_array.c](https://github.com/jessasesh/holbertonschool-simple_shell/blob/master/free_array.c)|void free_array(char **array)|Free memory|

## Flow Chart

Created by [Brad Brown](https://github.com/BradBrown6621) & [Jess Dison](https://github.com/jessasesh)
