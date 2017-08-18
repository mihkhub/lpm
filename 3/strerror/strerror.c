/*
 * strerr, strerror_r - return string describing error number
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char buf[64];
	size_t buflen = 64;
	printf("strerror: %s\n", strerror(1));
	int ret = strerror_r(1, buf, buflen); // thread safe, XSI-compilant is default. It returns the error string in the user-supplied buffer buf of length buflen.
	printf("strerror_r: %s ret=%d\n", buf, ret);
	return 0;	
}
