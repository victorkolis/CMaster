#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char word[15];
	printf("Enter a word: \n");
	gets(word);
	
	printf("The word you've entered is: '%s'.\n", word);
	
	return (0);
}
