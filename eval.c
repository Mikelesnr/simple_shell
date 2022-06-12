include "shell.h"

void eval(char *cmdline)
{
	int bg;
	struct command cmd;
	
	printf("evaluating '%s'\n", cmdline);
	
	//parce cmdline into cmd stucture
	bg = parse(cmdline, *cmd);
	printf ("Found command %s\n", cmd.argv[0]);
	
	//-1 means error
	if (bg == -1) return;
}
