#include "shell.h"
/**
 * eval - parses the arguments
 *
 *@cmdline : command line
 *
 *return
 */

void eval(char *cmdline)
{
	int bg;
	struct command cmd;

	printf("evaluating '%s'\n", cmdline);
	bg = parse(cmdline, *cmd);
	printf("Found command %s\n", cmd.argv[0]);
	if (bg == -1)return;

	if (cmd.argv[0] == NULL) return;

	if (cmd.builtin == NONE)
		runSystemCOmmand(&cmd, bg);
	else
		runBuiltinCommand (&cmd, bg);
}
