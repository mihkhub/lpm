#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char **argv)
{
	mode_t mode;
	mode = mode & 0777;
	mkdir("./tmp", mode);
	return 0;
}
