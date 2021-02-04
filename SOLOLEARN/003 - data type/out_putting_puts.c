#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char wordy[10];
	
	printf("Enter any word: ");
	gets(wordy);
	
	printf("You've entered: ");
	puts(wordy);
	
	return (0);
}
