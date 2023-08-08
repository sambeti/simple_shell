
# 0x16. C - Simple Shell


![kitty](https://media.tenor.com/pk14BEX9RYsAAAAi/kawai-cute.gif)


This project is about implementing a simple shell. The shell should mimic the behavior of the `/bin/sh` shell, including the exact same output and error messages. The shell will be compiled on Ubuntu 20.04 LTS using gcc with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`.

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file, at the root of the project folder, is mandatory
- Code should follow the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- The shell should not have any memory leaks
- Each file should contain no more than 5 functions
- All header files should be include guarded
- Use system calls only when necessary
- Write a README with the description of your project
- An `AUTHORS` file should be created at the root of your repository, listing all individuals who contributed content to the repository (see Docker)

## GitHub

- There should be one project repository per group. If you and your partner have a repository with the same name in both your accounts, you risk a 0% score. Add your partner as a collaborator.

## Output

Unless specified otherwise, your program must have the exact same output as `/bin/sh`, as well as the exact same error output. The only difference is when you print an error, the name of the program must be equivalent to `argv[0]` (See below).

Example of error with `/bin/sh`:

```bash
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
```

Same error with your program `hsh`:

```bash
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
```

## List of Allowed Functions and System Calls

- `access` (man 2 access)
- `chdir` (man 2 chdir)
- `close` (man 2 close)
- `closedir` (man 3 closedir)
- `execve` (man 2 execve)
- `exit` (man 3 exit)
- `_exit` (man 2 _exit)
- `fflush` (man 3 fflush)
- `fork` (man 2 fork)
- `free` (man 3 free)
- `getcwd` (man 3 getcwd)
- `getline` (man 3 getline)
- `getpid` (man 2 getpid)
- `isatty` (man 3 isatty)
- `kill` (man 2 kill)
- `malloc` (man 3 malloc)
- `open` (man 2 open)
- `opendir` (man 3 opendir)
- `perror` (man 3 perror)
- `read` (man 2 read)
- `readdir` (man 3 readdir)
- `signal` (man 2 signal)
- `stat (__xstat)` (man 2 stat)
- `lstat (__lxstat)` (man 2 lstat)
- `fstat (__fxstat)` (man 2 fstat)
- `strtok` (man 3 strtok)
- `wait` (man 2 wait)
- `waitpid` (man 2 waitpid)
- `wait3` (man 2 wait3)
- `wait4` (man 2 wait4)
- `write` (man 2 write)

## Compilation

Your shell will be compiled using the following command:
- `waitpid` (man 2 waitpid)
- `wait3` (man 2 wait3)
- `wait4` (man 2 wait4)
- `write` (man 2 write)
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

## Testing

Your shell should work in both interactive and non-interactive mode.

In interactive mode:

```bash
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

In non-interactive mode:

```bash
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```


## Checks

The Checker will be released at the end of the project (1-2 days before the deadline). It is strongly encouraged for the entire class to work together to create a suite of checks covering both regular tests and edge cases for each task. See task 8. Test suite.


I hope this helps! Let me know if you need any further assistance.
