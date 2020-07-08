#include <iostream>
#include <iomanip>
using namespace std;
 
 
int main(){
	int start_hour,start_min;
	int leave_hour,leave_min;
	int park_hour,park_min,cost=0;
	
	cin >> start_hour >> start_min >> leave_hour >> leave_min;
	park_hour = leave_hour - start_hour;
	park_min  = leave_min - start_min;
	if(park_min < 0){
		park_min += 60;
		park_hour --;
	}
	
	if(park_hour > 2){
		cost += 120;
	} else {
		cost += park_hour*60;
		if(park_min > 30){
			cost += 30;
		}
		cout << cost <<endl;
		return 0;
	}
	
	if(park_hour > 4){
		cost += 160;
	} else {
		cost += (park_hour-2)*80;
		if(park_min > 30){
			cost += 40;
		}
		cout << cost <<endl;
	}
	
	cost += (park_hour-4)*120;
	if(park_min > 30){
		cost += 60;
	}
	cout << cost <<endl;
	return 0;
}