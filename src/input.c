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

	// If no proj param was passed, prompt the user to enter one
	if (count > 2 || count) {
		*nameOut = malloc(100);
		if (*nameOut == NULL) {
			(void)printf("Memory allocation failed. Exiting...");
			exit(EXIT_FAILURE);
		}
		(void)printf("Please enter a project name and press ENTER: ");
		(void)scanf("%s", *nameOut);
	} else {
		*nameOut = *(++pArgs); // Read name from the args directly
	}

	(void)printf("Got project name: %s\r\n", *nameOut);
	return 1; // Success
}
