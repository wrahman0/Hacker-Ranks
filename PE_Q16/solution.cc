#include <iostream>
#include <string>
#include <vector>


using namespace std;

string prepend (string master, string slave){

    return slave + master;

}

//Takes in an array of ints (one digit) and returns the sum. Does not care about the size of the int
string addDigitsWithCarry (vector<int> digitsToAdd){

    int carry = 0, sum = 0;
    string answer = "";

    for (int i = 0; i < digitsToAdd.size(); i++){

        cout << "Adding " << digitsToAdd.at(i) << endl;

        if ( sum + digitsToAdd.at(i) >= 10) {

            sum += digitsToAdd.at(i) - 10;
            carry += 10;

        }else{

            sum += digitsToAdd.at(i);

        }

        cout << "Carry is " << carry << "\nSum is " << sum << endl;

    }

    answer = prepend (to_string(sum) , to_string (carry/10));
    return answer;
}

int main (){

    vector <int> digits;
    cout << addDigitsWithCarry (digits) << endl;
    return 0;
}
