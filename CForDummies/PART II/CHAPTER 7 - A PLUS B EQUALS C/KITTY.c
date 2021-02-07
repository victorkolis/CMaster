#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char kitty[20];
	
	printf("What would you like to name your cat? \n");
	gets(kitty);
	
	printf("%s is a nice name. What else do you have in mind? ", kitty);
	
	gets(kitty);
	
	printf("%s is nice, too!\n", kitty);
	
	return (0);
}
