#include <iostream>
#include <iomanip>
using namespace std;
#define MALE 1
#define FEMALE 2
 
int main(){
	int sex;
	double height,std_weight;
	
	while(cin >> height){
		cin >> sex;
		if(sex == MALE){
			std_weight = (height - 80)*0.7; 
		} else if(sex == FEMALE){
			std_weight = (height - 70)*0.6; 
		}
		cout << fixed << setprecision(1) << std_weight << endl;
	}
	return 0;
}