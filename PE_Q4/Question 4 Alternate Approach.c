#include <stdio.h>
#include <math.h>


int isPalindrome (int testNumber){
	
	//Length of the palindrome number;
	int length = floor(log10(testNumber)) + 1;
	int digits[length];
	int counter = 0;
	int i = length - 1;
	
	for (; i >= 0; i--){

		digits[i]= testNumber - testNumber/10;
		printf("%d\n", digits[i]);
		testNumber /= 10;

	}

	for (;counter <= length/2 ; counter++){
		if (digits[counter] != digits[length-1-counter]){
			return 0;
		}
	}
	return 1;
}

int main (void){


	//Get a product
	int product;
	int multiplierOne = 999;
	

	for (; multiplierOne > 100; multiplierOne--){
		int multiplierTwo = 999;
		for (; multiplierTwo > 100; multiplierTwo--){
			product = multiplierOne * multiplierTwo;
			printf("%d\n", product);
			if (isPalindrome(product)){
				printf("%d\n", product);
				goto jump;
			}		
		}
	}
	jump:
	return 0;
}