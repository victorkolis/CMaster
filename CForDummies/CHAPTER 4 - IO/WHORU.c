#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char user[20];
	
	
	printf("What is your name? ");
	scanf("%s", &user);
	printf("Darn glad to meet you, %s!", user);
	
	return (0);
}