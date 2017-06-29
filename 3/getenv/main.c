#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int g_disable = 0;
	const char  * value;
	value =  getenv("CPU_ISOLATED");
	printf("g_disable=%d\n", g_disable);
	if (value )
		g_disable = 1;
	printf("g_disable=%d\n", g_disable);
	printf("value=%s\n",value);
	return 0;
}
