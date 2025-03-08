#include "input.h"
#include <stdio.h>

// argc: Amount of args passed from the command line
int main(int argc, char **argv) {
	char *projDir = GetDir(argv);
	(void)printf("User specified directory: %s", projDir);
}
