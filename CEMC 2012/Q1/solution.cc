#include <iostream>
#include <vector>

using namespace std;

bool isUnique (int year){

	bool digits[10] = {false};

	int x = year, digitsInYear = 0;

	while (x/=10){
		digitsInYear++;
	}

	for (int i = 0; i < digitsInYear; i++){
		int currDig = year % 10;
		year /= 10;
		if (digits[currDig]==true){
			return false;
		}else{
			digits[currDig] = true;
		}
	}

	return true;

}

int main (){

	int user;
	cin >> user;
	while (!isUnique(++user)){

	}
	cout << user <<endl;
	

	return 0;
}