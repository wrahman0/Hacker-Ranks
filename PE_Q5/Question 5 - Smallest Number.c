#include <stdio.h>
#include <math.h>


void smallestNum(int iterator){
	
	int i = 1;
	for (; i <= 20; i++){
		if (iterator % i != 0){
			iterator++;
			i = 1;
		}
	}
	printf("%d\n", iterator );
}

int main (void){
	
	smallestNum(2520);

}