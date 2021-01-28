/* Author: Victor Kolis
 * CHAPTER 1, obese
 */

#include <stdio.h>
#include <math.h>

#define LIMIT 30

int main(){
	float weight, height, bmi;

	printf("\n What's your weight and height?");
	scanf("%f %f", &weight, &height);
	bmi = weight/pow(height, 2);
	printf("\n Your bmi is %.1f", bmi);
	if(bmi <= LIMIT) printf("\n You are not obese!");
	else 			 printf("\n You are obese");


	return 0;
}
