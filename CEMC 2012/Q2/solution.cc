#include <iostream>

using namespace std;

class Bridge {

	public:
		Bridge (int max) : capacity (max), curr_index(0), cars_passed(0), cracked(false){
			
		};
		virtual ~Bridge (){};
		void addCar (int mass){
			if (!isCracked()){
				cars [curr_index] = mass;
				increaseIndex();
				if (getWeight() > capacity){
					cracked = true;
				}else{
					cars_passed++;
				}	
			}
		}
		int getWeight () {
			int sum = 0;
			for (int i = 0; i < 4; i++){
				sum += cars[i];
			}
			return sum;
		}
		bool isCracked(){return cracked;};
		int getCarsPassed () {
			return cars_passed;
		}

	private:
		void increaseIndex (){
			curr_index++;
			if (curr_index >= 4) 
				curr_index = 0;
		}
		int cars [4] = {0};
		int capacity;
		int curr_index;
		int cars_passed;
		bool cracked;

};


int main (){

	int max;
	cin >> max;

	Bridge *myBridge = new Bridge (max);

	int num_cars;
	cin >> num_cars;

	int curr_weight;

	for (int i = 0; i < num_cars; i++){
		
		cin >> curr_weight;
		myBridge->addCar(curr_weight);

	}

	cout << myBridge->getWeight() << endl;
	cout << myBridge->getCarsPassed() << endl;


	return 0;
}