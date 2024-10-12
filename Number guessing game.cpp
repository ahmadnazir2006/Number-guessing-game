#include <iostream>
using namespace std;
int main(){
	int  st = 1, end = 100, mid, answer;
	cout << "Guess your number between 1 and 100" << endl;
	

	while (end>st) {
		mid = (st + end) / 2;
		
		cout << "Is your number greater than " << mid<<endl<<"1 for yes ,0 for no"<<endl;
		cin >> answer;
		if (answer == 1) {
			st = mid+1;
			

		}
		else if(answer==0){
			end = mid;
		
		}
	}
	cout << "Is your number "<< end;
}