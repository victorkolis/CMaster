#include <stdio.h>


int main(int argc, char *argv[]) {
	
	/* Conversion character s -> %s */
	printf("%s", "Goodbye, cruel world!\n");
	printf("%s, %s %s!\n", "Goodbye", "cruel", "world");
	
	/* Any number between the % and the s are used to set 
	* the width of the text string displayed. So %15s means
	* to display a string of text using 15 characters.
	*/
	printf("%21s", "21 characters.");
		
	return (0);
	
}
