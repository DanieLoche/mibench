#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Starting test.");

	int ext = gsm_func(argc, argv);

	printf("End of test.");

	return ext;
}

