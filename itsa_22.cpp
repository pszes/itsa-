#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

 
int main(){
	int array[3][3];
	
	cin >> array[0][0] >> array[0][1] >> array[0][2]
		>> array[1][0] >> array[1][1] >> array[1][2]
		>> array[2][0] >> array[2][1] >> array[2][2];
	if(array[0][0] == array[1][1] && array[1][1] == array[2][2]){
		cout << "True\n";
		return 0;
	}
	if(array[0][2] == array[1][1] && array[1][1] == array[2][0]){
		cout << "True\n";
		return 0;
	}
	for(int i=0;i<3;i++){
		if(array[i][0] == array[i][1] && array[i][1] == array[i][2]){
			cout << "True\n";
			return 0;
		}
		if(array[0][i] == array[1][i] && array[1][i] == array[2][i]){
			cout << "True\n";
			return 0;
		}
	}
	cout << "False\n";
	return 0;
}