/*
 * A simple C program
 * Calculate and print the areas of circles
 */

#include <stdio.h> // Preprocessor directive

double circularArea(double b); // Function declaration (prototype form)

int main() { // Definition of main begins

	double radius = 1.0, area = 0.0;

	printf("Areas of Circles\n\n");
	printf("Radius				Area\n"
		   "---------------------------------------------\n" );

	area = circularArea(radius);
	printf("%10.1f		%10.2f\n", radius, area);

	radius = 5.0;
	area = circularArea(radius);
	printf("%10.1f		%10.2f\n", radius, area);

	return 0;
}

double circularArea(double r)

{
	const double PI = 3.1415926536;
	return PI * r * r;

}






















