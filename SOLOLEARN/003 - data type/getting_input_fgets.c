#include <stdio.h>
#define MAX 100

int main(int argc, char *argv[]) {
	
	char verb[MAX];
	
	printf("Enter a verb: ");
//	gets(verb); is considered unsafe
	fgets(verb, MAX, stdin);
	
	printf("You've entered: %s\n", verb);
	
	return (0);
}
