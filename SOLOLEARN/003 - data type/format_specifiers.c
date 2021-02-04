#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int x;
	float num;
	char text[20];
	
	/* an & is not needed for a string because a string name act a pointer */
	scanf("%d %f %s", &x, &num, text);
	printf("%d %f %s", x, num, text);
	
	return (0);
}
