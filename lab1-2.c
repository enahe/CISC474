#include <stdlib.h>
#include <stdio.h>

int main (int argc, char* argv[]) {
	int x = 8;
	int *y = &x;
       	printf("X: %d\n", x);
	printf("Y: %p\n", y);
	printf("Address of X: %p\n", &x);
	printf("Address of Y: %p\n", &y);
	printf("Value pointed at by Y: %d\n", *y);
	return 0;

}
