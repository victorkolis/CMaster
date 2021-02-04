#include <stdio.h>

int main(int argc, char *argv[]) {
	
	printf("Enter a letter: ");
	char verb = getchar();
	
	printf("You've entered: '%c'.", verb);
	
	return (0);
}
