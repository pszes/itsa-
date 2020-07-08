#include <iostream> 
using namespace std; 
 
  
int main(){ 
	int n,a,b,t;
	
	cin >> n;
	a = 1; b = 1;
	if(n<=2){
		cout << 1 << endl;
	} else {
		for(int i = 3;i<=n;i++){
			t = a;
			a = a+b;
			b = t;
		}
		cout << a <<endl;
	}
	return 0;
}