#include <iostream> 
#include <iomanip>
using namespace std; 
 
  
int main(){ 
	int n;
	int c1,c2,c3;
	
	cin >> n;
	c1 = n/10;
	n = n%10;
	c2 = n/5;
	n = n%5;
	c3 = n;
	cout << "NT10=" << c1 << endl;
	cout << "NT5=" << c2 << endl;
	cout << "NT1=" << c3 << endl;
	return 0;
}