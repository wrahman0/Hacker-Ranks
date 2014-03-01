#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
    int N, T;
    int enter, exit;
    int min;

    vector <int> width;
    vector <int> solution;

    cin >> N;
    cin >> T;

    for (int i = 0 , j; i < N; i++){
    	cin >> j;
    	width.push_back (j);
    }
    	

    while (T > 0){
    	
    	T--;

    	min = 3;
    	cin >> enter;
    	cin >> exit;
    	
    	for (int i = enter; i <= exit; i++){ 
    	
    		if (min > width.at(i)) min = width.at(i); 
    	
    	}

    	solution.push_back(min);

    }



    for (int i = 0 ; i < solution.size(); i++) {

    	cout << solution.at(i) << endl;

    }
    	

    return 0;
}
