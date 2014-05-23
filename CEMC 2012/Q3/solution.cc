#include <iostream>

using namespace std;

void outcomeFound (int outcomes[6][3], int teamA, int teamB){

	if (teamA == 1){
		if (teamB == 2){
			outcomes[0][0] = true;
		}else if (teamB == 3){
			outcomes[1][0] = true;
		}else if (teamB == 4){
			outcomes[2][0] = true;
		}
	}
}


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
	};

	cin >> curr_team;
	curr_team--;
	cin >> played_games;

	for (int i = 0; i < played_games; i++){
		
		for (int j = 0; j < 4; j++){
			cin >> indiv_match[i];
		}
		
		//flag outcomes
		outcomeFound (outcomes, indiv_match[0]-1, indiv_match[1]-1);			
					
		if (indiv_match[2] > indiv_match[3]){ //win
			
			//First Team wins
			teams[indiv_match[0] - 1][0] ++;
			//Second Team loses
			teams[indiv_match[1] - 1][1] ++;

		}else if(indiv_match[2] < indiv_match[3]){ //lose
			
			//First Team loses
			teams[indiv_match[0] - 1][1] ++;

			//Second Team wins
			teams[indiv_match[1] - 1][0] ++;

		}else if (indiv_match[2] == indiv_match[3]){ //tie

			//Both tie
			teams[indiv_match[0] - 1][2]++;
			teams[indiv_match[1] - 1][2]++;

		}
	}

	return 0;
}