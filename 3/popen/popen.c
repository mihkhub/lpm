#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	size_t n = 1024;
	char *line = (char *)malloc(n);
	const char cmd[] = "uname -r";
	FILE * f = popen(cmd, "r");	
	getline(&line, &n, f);	
	printf("%s",line);
	pclose(f);
	free(line);
	return 0;
}
