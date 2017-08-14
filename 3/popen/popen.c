#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	size_t n = 1024;
	char *line1 = (char *)malloc(n);
	char buf[1024];
	char * line = buf;
	const char cmd[] = "uname -r";
	const char cmd1[] = "uname -m";
	FILE * f = popen(cmd, "r");	
	getline(&line, &n, f);	
	printf("%s\n",line);
	pclose(f);
	/* heap buffer */
	FILE * f1 = popen(cmd1, "r");	
	getline(&line1, &n, f1);	
	printf("%s\n",line1);
	pclose(f1);
	return 0;
}
