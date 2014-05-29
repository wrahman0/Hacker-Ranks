#include <iostream>


using namespace std;

//provide the coordinate for the end point

int possibleRoutes (int curr_x, int curr_y, int end_x, int end_y){

	cout << " curr_x: " << curr_x
	<< " curr_y: " << curr_y
	<< " end_x: " << end_x
	<< " end_y: " << end_y << endl;

	if (curr_x == end_x && curr_y == end_y){
		return 1;
	}else {
		
		if ( curr_x + 1 <= end_x && curr_y + 1 <= end_y )
			return possibleRoutes ( curr_x + 1, curr_y, end_x, end_y ) + possibleRoutes ( curr_x, curr_y + 1, end_x, end_y );
		else if ( curr_x + 1 <= end_x )
			return possibleRoutes ( curr_x + 1, curr_y, end_x, end_y );
		else if ( curr_y + 1 <= end_y )
			return possibleRoutes ( curr_x, curr_y + 1, end_x, end_y );
		else return -1000000;

	}

}

int main (){

	cout << possibleRoutes (0,0,3,3) << endl;
	return 0;
}