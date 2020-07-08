#include <iostream> 
using namespace std; 
 
int main(){ 
	int n;
	
	while(cin >> n){
		switch(n){
			case 1:
				cout << "Person\n";
				break;
			case 2:
				cout << "Fairy\n";
				break;
			case 3:
				cout << "Dwarf\n";
				break;
			default:
				break;
		}
	}
	return 0;
}