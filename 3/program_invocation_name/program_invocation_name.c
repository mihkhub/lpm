#include <stdio.h>
#define __USE_GNU 
#include <errno.h>

int main(int arg, char **argv)
{
	
	printf("program_invocation_name: %s\n", program_invocation_name);
	printf("program_invocation_short_name: %s\n", program_invocation_short_name);
	return 0;
}
