#include "input.h"
#include "project.h"

// argc: Amount of args passed from the command line
int main(int argc, char **argv) {

	// struct for project info
	struct Project project;
	struct Project *ptrProject = &project; // Probs not needed, just using to learn

	char *projDir = GetDir(argv); // Get the project directory name from passed args
	ptrProject->dir = projDir;
}
