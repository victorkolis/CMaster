#include <stdio.h>
#include <math.h>
#define PI 3.14159248

int main() {
	float radius, area;
	printf("\nEnter the circle radius: ");
	scanf("%f", &radius);
	area = 2 * PI * pow(radius, 2);
	printf("The area of the circle is: %.2f\n", area);

	return 0;
}
