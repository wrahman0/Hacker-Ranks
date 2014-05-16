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
	

	return 0;
}