#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int first, second, sum;

int main (int argc, char* argv[]) {
	assert(argc == 3);
	first = atoi(argv[1]);
	second = atoi(argv[2]);
	sum = first+second;
	printf("%d\n",sum);
	return 0;

}
