#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> 
#include <sys/types.h>
#include <sys/syscall.h>

int main (int argc, char* argv[]) {
	int a = 10;
	int b = 14;
	if (a >= b) {
		fork();
	}
	else {
		exit(1);
	}
	return 0;
	
}

