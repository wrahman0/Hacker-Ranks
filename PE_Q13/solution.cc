#include <iostream>
#include <string>
#include <vector>

using namespace std;

string prepend (string master, string slave){

    return slave + master;

}


string addDigitsWithCarry (vector<int> digitsToAdd){

    int carry = 0, sum = 0;
    string answer = "";

    for (int i = 0; i < digitsToAdd.size(); i++){

        cout << "Adding " << digitsToAdd.at(i) << endl;

        if ( sum + digitsToAdd.at(i) >= 10) {

            sum += digitsToAdd.at(i) - 10;
            carry += 10;
            cout <<"Done" << endl;

        }else{

            sum += digitsToAdd.at(i);

        }

        cout << "Carry is " << carry << "\nSum is " << sum << endl;

    }

    answer = prepend (to_string(sum) , to_string (carry/10));
    return answer;
}

int main () {

	int INPUT;
	vector <int> arrayOfNumbers;

	while (INPUT << cin){
		arrayOfNumbers.push_back (INPUT);
	}

	for (int i = 0; i < arrayOfNumbers.size(); i++){
		cout << arrayOfNumbers.at(i) << endl;
	}

	return 0;
}


