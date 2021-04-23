#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// Assume name shorter than 20 characters
	char ex[20];
	puts("Enter your girlfriend's name: ");
	scanf("%s", &ex);
	printf("Dear %s you are history", ex);
		
	return 0;
}
