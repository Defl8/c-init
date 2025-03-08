#include <stdio.h>
#include <stdlib.h>

// argc: Amount of args passed from the command line
int main(int argc, char *argv[]) {
	char *userInput = *(++argv);
	if (userInput == NULL) {
		(void)printf("You didn't enter shit you dumbass\r\n");
		exit(EXIT_FAILURE); // No dir is entered as an arg
	} else {
		(void)printf("The arg entered was: %s\r\n", userInput);
	}
	exit(EXIT_SUCCESS);
}
