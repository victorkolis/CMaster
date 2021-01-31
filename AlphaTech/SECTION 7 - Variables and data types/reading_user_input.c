#include <stdio.h>

int main(int argc, char *argv[]) {
	float grade_1;
	float grade_2;
	
	printf("Please enter your grades.\n");
	
	printf("\nGrade 1: ");
	scanf("%f", &grade_1);
	
	printf("\nGrade 2: ");
	scanf("%f", &grade_2);
	
	printf("Your average grading is: %.2f", (grade_1 + grade_2)/2);
	
}
