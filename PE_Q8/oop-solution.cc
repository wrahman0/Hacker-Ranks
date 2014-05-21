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

	

	return 0;
}


