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

    for (int i = 0; i < digitsToAdd.size()  - 1; i++){

        if (carry + digitsToAdd[i] + digitsToAdd[i+1] > (10 * i)){

            sum = digitsToAdd[i] + digitsToAdd[i+1] + carry - (10 * i);
            carry = 10 * i;

        }else{

            sum = digitsToAdd[i] + digitsToAdd[i+1];

        }

        answer = prepend (answer, to_string (sum));

    }


    return answer;
}

int main (){

    vector <int> digits;
    digits.push_back (9);
    digits.push_back (9);
    digits.push_back (9);
    cout << addDigitsWithCarry (digits) << endl;
    return 0;
}
