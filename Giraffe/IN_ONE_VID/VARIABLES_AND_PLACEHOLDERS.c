#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char testGrade = 'A';
	char name[] = "Kolis";
	
	short age_0 = 10;
	int age_1 = 20;
	long age_2 = 30;
	long long age_3 = 10;
	
	float pi_0 = 3.0;
	double pi_1 = 3.1415;
	long double pi_2 = 3.14159;
	
	const int IS_TALL = 1;  // B O O L
	
	testGrade = 'F';
	
	printf("%s, your grade is %c \n", name, testGrade);
	
	/*
	%c character
	%d integer
	%e exponecial floating-point numbers
	%f floating-point numbers
	%i integer (base 10)
	%o octal numbers (base 8)
	%s a string of characters
	%u unsigned decimal (integer) number
	%x number in hexadecimal (base 16)
	%% print a percent sign
	\% print a percent sign
	*/
	
	return 0;
	
}
