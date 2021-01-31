#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float height;
	float width;
	
	printf("Welcome to the rectangle area calculator.");
	
	printf("\nHeight: ");
	scanf("%f", &height);
	
	printf("\nWidth: ");
	scanf("%f", &width);
	
	printf("\nThe area of the rectangle is: %.2f", height * width);
	
	return 0;
}
