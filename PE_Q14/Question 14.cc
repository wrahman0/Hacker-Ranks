#include <iostream>
using namespace std;
 
long chain (long N){

	if (N == 1) return 1;
	else if (N%2==0) return 1+chain(N/2);
	else return 1+chain(3*N + 1);

}
 
int main() {
	int x, start =1;
	long max = 0;
	for (long i = 1; i <= 1000000; i++){
		x = chain (i);
		if (x > max) {
			max = x;
			start = i;
		};
	}
	cout << start << endl;
	return 0;
}