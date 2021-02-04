/* MADLIB1.c Source Code
 * Written by Victor Kolis
 */


#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char adjective[20];
	char furniture[20];
	char chore[20];
	char food[20];
	
	/* Get the words to use them in the madlib game */	
	printf("Enter an adjective: ");
	scanf("%s", &adjective);
	
	printf("Enter a food: ");
	scanf("%s", &food);
	
	printf("Enter a chore: ");
	scanf("%s", &chore);
	
	printf("Enter a furniture: ");
	scanf("%s", &furniture);
	
	/* Display the output */
	printf("\n\nDon't touch that %s %s!\n", adjective, food);
	printf("\n\nI just %s the %s!\n", chore, furniture);
	
	
	return (0);
}
