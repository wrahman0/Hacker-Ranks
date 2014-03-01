#include <stdio.h>
#include <math.h>

int isPrime (int testNumber){
	//Return 1 if number is a prime. Else return 0		
	int upperBound = sqrt(testNumber), i = 2;
	for (; i <= upperBound; i++){

		if (testNumber % i == 0){
			return 0;
		}

	}
	
	return 1;
}

int main (void){
	
	int loopCounter = 0;
	int prime = 2;
	while (loopCounter != 10001){
		if (isPrime(prime) == 1){
			printf("[Number Prime: %d] && Prime = %d\n", loopCounter, prime);
			loopCounter++;
		}
		prime++;
	}
	printf("%d\n", prime);

}