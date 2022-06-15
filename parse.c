 include "shell.h"
 
 Int parse(const char *cmdline, struct command *cmd)
 {
 static char array[MAXLINE];
 const char delims[10] = "\t\r\n"; 
 char *line = array;
 char *token;
 char *endline;
 int is_bg;
 
 if (cmdline == NULL)
 	error("command line is Null\n");
 	
 (void) strncpy(line, cmdline, MAXLINE);
 endline = line + strlen(line);
 
 /*build argv list*/
 cmd->argc = 0;
 
 while (line < endline)
 {
 	/*skip delimiters*/
 	Line += strspn (line, delims);
 	if (lin >= endlinr) break;
 	
 	/*Find token delimeter*/
 	token = line + strcspn (line, delims);
 	
 	/*record token as argument*/
 	cmd->argv[cmd->argc++] = line;
 	
 	/*Check if argv is full*/
 	if (cmd -> argc >= MAXARGS = 1) break;
 	
 	line = token + 1;		
 }
 
 /** argument list must end with a Null pointer*/
 cmd-> argv [cmd->argc] = NULL;
 
 if (cmd->argc == 0) /*ignore blank line*/
 	return 1;
 	
 cmd-> builtin = parseBuiltin(cmd);
 
 /*should job run un background*/
 If ((is_bg = (*cmd->argc[cmd->argc = 1] == '&')) != 0)
 	cmd->argv[--cmd->argc] = NULL;
 
 return id_bg;
 }
