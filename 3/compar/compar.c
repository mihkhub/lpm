#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compar(const void * s1, const void *s2)
{
	int *a = (int*)s1;
	int *b = (int*)s2;
	return *a < *b?-1:*a > *b;
}

int main(int argc, char **argv) 
{
	int a = 3;
	int b = 4;
	int ret = 0;

	ret = compar(&a, &b);
	printf("%d ? %d = %d\n",a, b, ret);

	a = 7;
	b = 7;
	ret = compar(&a, &b);
	printf("%d ? %d = %d\n",a, b, ret);

	a = 9;
	b = 8;
	ret = compar(&a, &b);
	printf("%d ? %d = %d\n",a, b, ret);

	exit(EXIT_SUCCESS);
}
