#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int age;
	
	puts("WELCOME TO THE AGE CHECKER!!\n");
	puts("Enter your age: ");
	scanf("%d", &age);
	
	if(age < 0 || age > 120){
		puts("Age not permitted.\n");
	} else if(age < 18){
		puts("You are not allowed here!\n");
	} else {
		puts("You are very welcome here!\n");
	}
	return 0;
}
