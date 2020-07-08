#include <iostream> 
using namespace std; 
 
  
int main(){ 
	int n,t,x;
	
	cin >> n;
	t = n;
	while(t >= 3){
		x = t/3;
		n += x;
		t = t%3;
		t += x;
	}
	cout << n << endl;
	return 0;
}