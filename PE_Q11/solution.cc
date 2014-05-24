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

	for (int i = 0; i < 20; i++){

		for (int j = 0; j < 20; j++){
			
			bool *clear = isClear(i,j);
			
			if (clear[0]){
				tempProd = grid[i][j] * grid[i][j+1] * grid[i][j+2] * grid[i][j+3];
				if (tempProd > maxProd)
					maxProd = tempProd;
			}

			if (clear[1]){
				tempProd = grid[i][j] * grid[i+1][j] * grid[i+2][j] * grid[i+3][j];
				if (tempProd > maxProd)
					maxProd = tempProd;	
			}

			if (clear[0] && clear[1]){
				tempProd = grid[i][j] * grid[i+1][j+1] * grid[i+2][j+2] * grid[i+3][j+3];
				if (tempProd > maxProd)
					maxProd = tempProd;		
			}

		}
	}

	cout << maxProd << endl;

	return 0;
}