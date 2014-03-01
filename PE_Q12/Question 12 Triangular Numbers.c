// #include <stdio.h>

// int numDivisors(int number);
// int triNumGen(int number);

// int main (void){
// 	int keepRunning = 1;
// 	int i = 1;
// 	for (i = 1;keepRunning==1;i++) {
// 		printf("Generating: %d -- triNum: %d -- divCount: %d\n", i, triNumGen(i), numDivisors(triNumGen(i)));
// 		if (numDivisors(triNumGen(i)) > 500) {
// 			keepRunning = 0; 
// 		}
// 	}
// 	printf("Triangle Number: %d\n", triNumGen(i));
// 	return 0;
// }

// int numDivisors(int number){
// 	int divisorCount = 0;
// 	int i = 1;
// 	for (i; i <= number; i++) if (number%i==0) divisorCount++;
// 	return divisorCount;
// }

// int triNumGen(int number){
// 	if (number == 0) return number;
// 	else return number + triNumGen (number-1);
// }

//Write efficient soln