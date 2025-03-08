#include "project.h"
#include <stdio.h>
#include <stdlib.h>

void FreeProject(Project *proj) {
	(void)printf("Freeing struct memory...");
	free(proj->name);
	free(proj->dir);
	free(proj->files);
	free(proj->folders);
	(void)printf("Finished freeing struct memory.");
}
