#include "input.h"
#include <stdio.h>
#include <stdlib.h>

char *GetDir(char **args) {
	char **pArgs = args;
	unsigned int count = 0;

	// Count the amount of args
	while (*args != NULL) {
		args++;
		count++;
	}

	// Exit if there is more than 2, mean more than 1 arg was passed
	if (count > 2) {
		(void)printf("Too many args passed. Exiting...\r\n");
		exit(EXIT_FAILURE);
	}
	char *dir = *(++pArgs);

	return dir; // Return the arg that was passed
}
