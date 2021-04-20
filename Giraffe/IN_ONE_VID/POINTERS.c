#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// P O I N T E R S
	
	// Printing the memory address of that integer
	int num = 10;
	printf("%p \n", &num);
	
	// Storing the memory pointer
	int *pNum = &num;
	
	printf("%p \n", pNum);
	
	// Derefencing a pointer with the * prefix, getting the actual value instead of the address
	printf("%d \n", *pNum);
	
	
	return 0;
}
