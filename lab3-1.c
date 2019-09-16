#include <stdlib.h>
#include <stdio.h>

int eax, edx;

void func1(int first, int second){
	eax = first;
	edx = first + first;
	eax = first;
	edx = edx + first;
	eax = second;
	edx = edx + second;
	second = edx;
	func2(second, 3);
}

void func2(int first, int second) {
	eax = first;
	eax = first - second;
}

int main(int argc, char* argv[]){
	int temp = 0;
	func1(4,6);
	temp = eax;
	eax = 0;
	return 0;
}
