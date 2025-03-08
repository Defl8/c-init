#include "input.h"
#include <stdio.h>
#include <stdlib.h>

int GetName(char **args, char **nameOut) {
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
		return 0;
	}
	*nameOut = *(++pArgs);

	return 1; // Return the arg that was passed
}
