#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int cycles, cases, height;
	vector <int> solutions;

	cin >> cases;

	for (int i = 0 ; i < cases; i++){
		
		height = 1;
		cin >> cycles;
		
		for (int j = 1; j <= cycles; j++){
			
			if (j%2 == 0){
				height ++;
			}else{
				height += height;
			}

		}

		solutions.push_back(height);


	}
	

	for (int i = 0; i < solutions.size(); i++){

		cout << solutions.at(i) << endl;

	}


    return 0;
}
