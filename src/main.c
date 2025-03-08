#include "input.h"
#include <stdio.h>

// argc: Amount of args passed from the command line
int main(int argc, char **argv) {
	char *userInput = GetDir(argv);
	(void)printf("The arg passed is: %s", userInput);
}
