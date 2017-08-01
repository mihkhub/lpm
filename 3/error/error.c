/*
 * error, error_at_line, error_message_count, error_on_per_line, error_print_progname
 */
#include <stdio.h>
#include <error.h>

int main(int argc, char **argv)
{
	error(0, 1, "test error"); // It flushes stdout, and then output to stderr the program name, a colon and a space
	// If status has a non-zero value, then error9) calls exit(3) to terminate the program using the given value
	return 0;
}
