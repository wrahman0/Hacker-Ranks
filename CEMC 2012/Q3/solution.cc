#include <iostream>

using namespace std;


int main (){

	//[win,loss,tie]
	int teams[4][3] = {
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
	}, indiv_match[4] = {0,0,0,0}, //[First, second, score_first, score_second]
	curr_team, played_games;

	int outcomes [6][3] = {
		{0,1,2},
		{0,1,3},
		{0,1,4},
		{0,2,3},
		{0,2,4},
		{0,3,4},
	}

	cin >> curr_team;
	curr_team--;
	cin >> played_games;

	for (int i = 0; i < played_games; i++){
		for (int j = 0; j < 4; j++){
			cin >> indiv_match[i];
		}
		
		//win
		if (indiv_match[2] > indiv_match[3]){
			
			//First Team wins
			teams[indiv_match[0] - 1][0] ++;

			//Second Team loses
			teams[indiv_match[1] - 1][1] ++;			
			

		}else if(indiv_match[2] < indiv_match[3]){
			
			//First Team loses
			teams[indiv_match[0] - 1][1] ++;

			//Second Team wins
			teams[indiv_match[1] - 1][0] ++;

		}else if (indiv_match[2] == indiv_match[3]){

			//Both tie
			teams[indiv_match[0] - 1][2]++;
			teams[indiv_match[1] - 1][2]++;

		}
	}

	return 0;
}