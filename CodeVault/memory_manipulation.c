#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system ("pause")*/
int main(int argc, char *argv[]){
	int arr_1[] = {1, 2};
	int arr_2[] = {1, 2};
	if (memcmp(arr_1, arr_2, 2 * sizeof(int)) == 0){  /* memcmp gets a byte type value*/
		printf("The arrays are equal\n");

	} else {
		printf("The arrays are not equal\n");
	}

	return 0;
}
