#include <iostream>
using namespace std;
 
int main(){
	int n;
	int a[2],b[2],c[2];
	char mode;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> mode >> a[0] >> a[1] >> b[0] >> b[1];
		switch(mode){
			case '+':
				c[0] = a[0] + b[0];
				c[1] = a[1] + b[1];
				break;
			case '-':
				c[0] = a[0] - b[0];
				c[1] = a[1] - b[1];
				break;
			case '*':
				c[0] = a[0]*b[0] - a[1]*b[1];
				c[1] = a[1]*b[0] + a[0]*b[1];
			default:
				break;
		}
		cout << c[0] << " " << c[1] << endl;
	}
	return 0;
}