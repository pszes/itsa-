#include <iostream>
using namespace std;
 
int main(){
	int n;
	bool flag;
	
	while(cin >> n){
		if(n < 2){
			cout << "NO\n";
		} else if(n == 2){
			cout << "YES\n";
		} else {
			flag = true;
			for(int i=3;i < n/2;i+=2){
				if(n%i == 0){
					flag = false;
					break;
				}
			}
			if(flag)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
	return 0;
}