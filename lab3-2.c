#include <stdlib.h>
#include <stdio.h>

int eax;
int main (int argc, char* argv[]) {
	int first, second, third, fourth;
       	fourth = 4;
	first = 0;
	third = 0;
	eax = fourth;
	if (eax == 1) {
		third = 0;
		goto L5;
	}
	else if (eax == 4) {
		first = 2;
		goto L5;
	}
	else {
		first = 3;
	}

L5: 
	third = 0;
	goto L6;


L6:
	eax = third;
	if (eax < first) {
		eax = third;
		eax = eax + third;
		third++;
	}
	eax = 0;
	return 0;

}

