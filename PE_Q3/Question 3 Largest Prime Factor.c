//Largest Prime Factor

#include <stdio.h>
#include <math.h>

int isPrime (int floored){

	//Return 1 of it is prime and 0 if its not
	int roundedSquareRoot = floor(sqrt (floored));

	for (; roundedSquareRoot > 1; roundedSquareRoot--){

		if (floored % roundedSquareRoot == 0){
			return 0; //Not a prime if it can be divided by another number other than one
		}
	
	}
	return 1; //Return true if there is nothing that divides this

}

int main (void){

	long analyze = 600851475143;
	long floored = floor(sqrt(analyze));

	for (; floored > 0; floored--){

		if (isPrime(floored) == 1 && analyze % floored == 0){
			
			printf("%lu\n", floored);	
			break;

		}


	}
	



	return 0;
}