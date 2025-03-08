/*
 * Steps needed to complete this project
 * 1. Get the project name from the args. Done.
 * 2. Store the project name in the project struct. Done.
 * 3. Ask for the project dir.
 */
#include "project.h"

// argc: Amount of args passed from the command line
int main(int argc, char **argv) {

	// struct for project info
	Project project;
	Project *ptrProject = &project; // Probs not needed, just using to learn

	// Get the project name
	GetName(argv, ptrProject);

	FreeProject(ptrProject);
}
