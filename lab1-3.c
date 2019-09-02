#include <stdlib.h>
#include <stdio.h>

int main (int argc, char* argv[]) {
	int arr[] = {42, 1337, 0};
	int *ptr;
	ptr = arr;
	printf("First value: %d\n", *ptr);
	ptr++;
	printf("Second value: %d\n", *ptr);
	ptr++;
	printf("Third value: %d\n", *ptr);
	return 0;

}
