#include <iostream>


using namespace std;

//provide the coordinate for the end point

int possibleRoutes (int curr_x, int curr_y, int end_x, int end_y){

	if (curr_x == end_x && curr_y == end_y){
		return 0;
	}else {
		if ( curr_x + 1 != end_x )
			return 1 + possibleRoutes ( curr_x + 1, curr_y, end_x, end_y ) + possibleRoutes ( curr_x, curr_y + 1, end_x, end_y );
	}

}

int main (){


	return 0;
}