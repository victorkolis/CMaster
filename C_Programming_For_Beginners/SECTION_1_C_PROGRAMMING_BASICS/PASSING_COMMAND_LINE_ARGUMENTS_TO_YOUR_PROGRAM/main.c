/* Passing commmand line arguments to your program */

#include <stdio.h>

int main(int argc, char *argv[]) {
	for (int i = 0; i < argc; i++){
		printf("CODE: argc length=%d arg %d is %s\n", argc, i, argv[i]);
	}
	
	return 0;
}
