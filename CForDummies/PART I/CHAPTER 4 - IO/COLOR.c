#include <stdio.h>

int main(int argc, char *argv[]) {
	char name[20];
	char color[20];
	
	printf("What is your name?\n");
	scanf("%s", name);
	
	printf("What is your favorite color?\n");
	scanf("%s", color);
	
	printf("%s's favorite color is %s.\n", name, color);
	
	return (0);
}
