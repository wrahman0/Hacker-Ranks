#include <stdio.h>


int main (void){

	int sum = 0, i = 3, counter = 0, multiple = 3;

	while (multiple<=1000){
		
		counter++;
		multiple = i * counter;
		sum += multiple;

	}

	i = 5;
	counter = 0;
	multiple = 5;

	while (multiple<=1000){
		
		counter++;
		multiple = i * counter;
		sum += multiple;

	}

	i = 15;
	counter = 0;
	multiple = 15;

	while (multiple<=1000){
		
		counter++;
		multiple = i * counter;
		sum -= multiple;

	}
	printf("%d\n", sum);

}