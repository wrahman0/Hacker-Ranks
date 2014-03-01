#include <stdio.h>
#include <math.h>



int isPalindrome(int testNumber){
	
	//Test if its a palindrome
	int length = floor (log10(testNumber)) + 1;
	int i = 0;
	int palindromeDigits [length-1];

	for(;i < length; i++){

		palindromeDigits [i] = testNumber % 10;
		testNumber /= 10;

	}
	i = 0;
	for (; i <= length/2; i++){
		if (palindromeDigits [i] != palindromeDigits [(length - 1) - i]){
			return 0;
		}
	}

	return 1;

}

int main (void){
	

	int numOne = 999, numTwo = 999, max = 0;
	for (; numOne >= 100; numOne--){
		for (; numTwo >= 100; numTwo--){
			if (isPalindrome(numOne*numTwo) && numOne*numTwo > max){
				max = numOne*numTwo;
				printf("MAX: %d \n", max);
			}
		}
		numTwo = 999;
	}		


}