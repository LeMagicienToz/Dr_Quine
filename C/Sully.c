#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i = 5;
	if (i <= 0)
    	return 0;
	char filename[64];
	char *code = "#include <stdio.h>%c#include <stdlib.h>%c%cint main ()%c{%c	int i = %d;%c	if (i <= 0)%c    	return 0;%c	char filename[64];%c	char *code = \
	%c%s%c;%c	sprintf(filename, %cSully_%s.c%c, i);%c	FILE *f = fopen(filename, %cw%c);%c	fprintf(f, code,10,10,10,10,10, i - 1,10,10,10,10,34, code, \
	34,10,34,i-1,34,10,34,34,10,10,10,34,i-1,34,10,10,34,i-1,34,10,10,10);%c\
	char compile_cmd[128];%c	sprintf(compile_cmd, %cgcc -Wall -Wextra -Werror %s -o Sully_%s%c, filename, i);%c	system(compile_cmd);%c	char exec_cmd[128];\
	%c	sprintf(exec_cmd, %c./Sully_%s%c, i);%c	system(exec_cmd);%c	fclose(f);%c}";
	sprintf(filename, "Sully_%d.c", i);
	FILE *f = fopen(filename, "w");
	fprintf(f, code,10,10,10,10,10, i - 1,10,10,10,10,34, code, 34,10,34,"%d",34,10,34,34,10,10,10,34,"%s","%d",34,10,10,10,34,"%d",34,10,10,10);
	char compile_cmd[128];
	sprintf(compile_cmd, "gcc -Wall -Wextra -Werror %s -o Sully_%d", filename, i);
	system(compile_cmd);
	char exec_cmd[128];
	sprintf(exec_cmd, "./Sully_%d", i);
	system(exec_cmd);
	fclose(f);
}