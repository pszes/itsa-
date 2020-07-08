#include <iostream>
#include <iomanip>
using namespace std;
 
 
int main(){
	int n;
	double d;
	
	while(cin >> n){
		d = n*1.6;
		cout << fixed << setprecision(1) << d << endl;
	}
	
	return 0;
}