#include <iostream> 
#include <vector>
using namespace std; 
 
  
int main(){ 
	int a,b,c;
	int total;
	cin >> a >> b >> c;
	total = a*20 + b*25 + c*30;
	while(a >= 3 && b >= 2){
		total -= 30;
		a -= 3;
		b -= 2;
	}
	cout << total << endl;
	return 0;
}