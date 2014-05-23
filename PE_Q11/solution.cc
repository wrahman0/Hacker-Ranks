#include <iostream>


using namespace std;


//Grid starts at [0,0] which is the top left corner
//Moving right is [+1, y]
//Moving down is [x, +1]

bool *isClear (int x, int y){

	bool *clear = new bool [2];
	clear[0] = true;
	clear[1] = true;

	if (x + 3 >= 20){
		clear[0] = false;
	}

	if (y + 3 >= 20){
		clear[1] = false;
	}

	return clear;

}

int main (){

	int grid[20][20];
	int maxProd = -1;
	int tempProd = -1;
	bool clear[2];

	for (int i = 0; i < 20; i++){
		for (int j = 0; j < 20; j++){
			cin >> grid[i][j];
		}
	}

	for (int i = 0; i < 20; i++){
		for (int j = 0; j < 20; j++){
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}