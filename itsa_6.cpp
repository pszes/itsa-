#include <iostream>
using namespace std;
 
int main(){
	int n;
	
	while(cin >> n){
		if(n < 3||n == 12){
			cout << "Winter\n";
		} else if(n < 6){
			cout << "Spring\n";
		} else if(n < 9){
			cout << "Summer\n";
		} else {
			cout << "Autumn\n";
		}
	}
	return 0;
}