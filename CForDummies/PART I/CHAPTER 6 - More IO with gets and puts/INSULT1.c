#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char jerk[20];
	
	printf("Name some jerk you know: ");
	gets(jerk);
	
	printf("\nYeah! I think %s is a jerk.\n", jerk);
	
	return (0);
}
