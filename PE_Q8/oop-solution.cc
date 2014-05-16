#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <cassert>

using namespace std;

class FiveNums {

	public:
		FiveNums (vector <int> initial_numbers){
			assert (initial_numbers.size() == 5);
			number_container = initial_numbers;
			first_index = 0;
		};

		virtual ~FiveNums(){};

		virtual void addNum (int to_add) {

			number_container.at (first_index) = to_add; // combine into one line
			first_index++;
			
			if (first_index == 5){
				first_index = 0;
			}

		};

		virtual int getProd (){
			assert (number_container.size () == 5);
			int prod = 0;
			for (int i = 0; i < number_container.size(); i++){
				prod *= number_container.at (i); 
			}
			return prod;
		};

	private:
		int first_index;
		vector <int> number_container;

};

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

	vector < int > starting_five;
	starting_five.push_back (arr.at(0));
	starting_five.push_back (arr.at(1));
	starting_five.push_back (arr.at(2));
	starting_five.push_back (arr.at(3));
	starting_five.push_back (arr.at(4));

	FiveNums *my_nums = new FiveNums(starting_five);

	//Finding solution
	int max = my_nums->getProd();

	for (int i = 5; i < arr.size(); i++){
		my_nums->addNum ( arr.at (i) );
		int temp = my_nums->getProd();
		if (temp > max){
			max = temp;
		}
	}

	cout << "MAX:" << max << endl;

	return 0;
}