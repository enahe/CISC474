#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	 char keyword[11] = "thatwaseasy";
	 char password[11];
	 int loopCounter = 0;
	 int correctCounter = 1;
	 printf("Please enter the password\n");
	 scanf("%s", password);
	 while (loopCounter <= 10) {
		 if (((keyword[10-loopCounter])-32) != password[loopCounter]){
			 correctCounter = 0;
		 }
	 loopCounter++;
	 }
	 if (correctCounter == 1) {
		 puts("Correct");
	 }
	 else{
		 puts("Incorrect");
	 }
}
