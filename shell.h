#ifndef SHELL_H
#define SHELL_H

/* header files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <fcntl.h>
#include <errno.h>

int MAXARGS;
struct command {
int args;
char *argv[MAXARGS];
enum builtin_t{
NUN, QUIT, JOBS< BG, FG} buitin;

int main(int args, char **argsv)
void eval(char *cmdline)
int main(int args, char *argv[])
Int parse(const char *cmdline, struct command *cmd)
void runSystemCommand(struct command *cmd, int bd)

#endif

