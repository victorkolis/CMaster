#include <stdio.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int age = 0;
	int year_of_birth;
	char *current_month;
	printf("Please enter your age: ");
	scanf("%d", &age);
	year_of_birth = 2021 - age;
	printf("%d", year_of_birth);
	
	return 0;
}