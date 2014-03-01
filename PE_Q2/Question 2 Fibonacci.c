#include <stdio.h>
#include <math.h>

int main(void)
{
		
	int fibonacci = 2, previousNumber = 1, temp = 0, sum;

	while (fibonacci <= 4*pow (10, 6)){

		if (fibonacci % 2 == 0){ //Add if the number is even
			sum += fibonacci;
		}

		temp = fibonacci;
		fibonacci += previousNumber; //increase the fibonacci by the previous amount
		previousNumber = temp;
	}

	printf("%d\n", sum);



	return 0;
}

