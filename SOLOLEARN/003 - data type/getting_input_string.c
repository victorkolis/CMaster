#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char verb[100];
	
	printf("Enter a verb: ");
	gets(verb);
	
	printf("You've entered: '%s'.", verb);
	
	
	return (0);
}
