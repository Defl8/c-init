#include "project.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void FreeProject(Project *proj) {
	(void)printf("Freeing struct memory...\r\n");
	free(proj->name);
	// free(proj->dir);
	// free(proj->files);
	// free(proj->folders);
	(void)printf("Finished freeing struct memory.\r\n");
}

int GetName(char **args, Project *nameOut) {
	char **pArgs = args;
	unsigned int count = 0;

	// Count the amount of args
	while (*args != NULL) {
		args++;
		count++;
	}

	nameOut->name = malloc(100);
	// If no proj param was passed, prompt the user to enter one
	if (count == 1 || count > 2) {
		if (nameOut->name == NULL) {
			(void)printf("Memory allocation failed. Exiting...");
			exit(EXIT_FAILURE);
		}
		(void)printf("Please enter a project name and press ENTER: ");
		(void)scanf("%s", nameOut->name);
	} else {
		strcpy(nameOut->name, *(++pArgs));
	}

	(void)printf("Got project name: %s\r\n", nameOut->name);
	return 1; // Success
}
