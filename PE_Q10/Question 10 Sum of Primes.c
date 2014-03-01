#include <stdio.h>
#include <math.h>



int isPrime (int number){
	int i;
	for (i = 2; i <= ceil(sqrt(number)); i++){
		if (number % i == 0){
			return 0;
		}
	}
	return 1;
}

void primes(int max){
	int i;
	long sum = 2;
	for (i = 3; i <= max; i++){
		if (isPrime(i)){
			sum += i;
		}
	}
	printf("%lu\n", sum);
}

int main (void){

	primes(1000000);
	return 0;

}