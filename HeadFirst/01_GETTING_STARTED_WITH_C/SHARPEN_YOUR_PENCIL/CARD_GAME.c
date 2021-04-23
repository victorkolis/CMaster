#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char suit = 'S';
	puts("Enter a card suit: ");
	scanf("%c", &suit);
	
	switch(suit){
		case 'C':
			puts("Clubs");
			break;
		case 'D':
			puts("Diamond");
			break;
		case 'H':
			puts("Hearts");
			break;
		default:
			puts("Spades");
		
	}
	
	return 0;
	
}