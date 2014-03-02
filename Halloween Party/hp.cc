#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

//Formula : MAX_CUTS^2/2 * MAX_CUTS^2/4
//Simplify: MAX_CUTS^2/4

int main() {

	int UPPER_BOUND;
	long long int MAX_CUTS;
	
	cin >> UPPER_BOUND;
	assert (UPPER_BOUND <= 10 && UPPER_BOUND >= 1);

	while (UPPER_BOUND--){
		
		cin >> MAX_CUTS;
        assert (MAX_CUTS >= 1);
        assert (MAX_CUTS <= pow(10,7));
		
		cout << (MAX_CUTS*MAX_CUTS/4) << endl;

	}

    return 0;
}
