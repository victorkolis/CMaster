#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char age_string[10];
	int age;
	int bonus;
	
	printf("Enter your age: ");
	gets(age_string);
	age = atoi(age_string);
	
	/* In case of a bad conversion */
	if (age == 0){
		puts("**INVALID AGE**");
	} else {
		
		if(age > 45){
			bonus = 1000;
		} else {
			bonus = 500;
		}
		
		printf("Your age is %d and your bonus is %d.\n", age, bonus);
	}
	
	
	return 0;
}
