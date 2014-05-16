#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main (){

	//Input the string into a vector
	vector <int> arr;
	ifstream numbersFile ("numbers.txt");
	string input;
	
	while (numbersFile >> input){
		for (int i = 0 ; i < input.length(); i++){
			arr.push_back (input.at (i) - 48);
		}
	}

	//Finding solution
	int max = arr.at(0) * arr.at(1) * arr.at(2) * arr.at(3) * arr.at(4) ;



	for (int i = 4; i < arr.size(); i++){
		
		int temp = arr.at(i-4) * arr.at(i-3) * arr.at(i-2) * arr.at(i-1) * arr.at(i) ;
		
		if (temp > max){
			max = temp;
		}

	}

	cout << "MAX:" << max << endl;

	return 0;
}