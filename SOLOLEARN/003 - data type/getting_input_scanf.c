#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char sentence[20];
	
	printf("Enter a random word: ");
	scanf("%s", &sentence);

	printf("The random word you've entered is: %s.", sentence);
	
	return (0);
}
