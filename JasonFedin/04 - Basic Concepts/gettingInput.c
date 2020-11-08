/*
 * gettingInput.c
 *
 *  Created on: Nov 8, 2020
 *      Author: victordematos
 */


#include <stdio.h>

int main(){

	char str[100];
	int i;
	double x;

	// If it is a string type use & to scan
	printf("Enter a value: ");
	scanf("%s %d",str, &i);

	printf("\nYou entered: %s %d ", str, i);

	printf("\nReading a double: ");
	scanf("%lf",&x);
	printf("\nYou entered: %.2lf ", x);
	return 0;
}
