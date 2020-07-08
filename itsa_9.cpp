#include <iostream>
using namespace std;
 
int main(){
	int n;
	int output;
	
	while(cin >> n){
		output = 0;
		for(int i=3;i<=n;i+=3){
			output += i;
		}
		cout << output << endl;
	}
	return 0;
}