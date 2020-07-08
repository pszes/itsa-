#include <iostream>
using namespace std;
 
int main(){
	int y;
	
	while(cin >> y){
		if(y%400 == 0){
			cout << "Bissextile Year\n";
		} else if(y%100 == 0){
			cout << "Common Year\n";
		} else if(y%4 == 0){
			cout << "Bissextile Year\n";
		} else {
			cout << "Common Year\n";
		}
	}
	return 0;
}