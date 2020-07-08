#include <iostream> 
using namespace std; 
 
  
int main(){ 
	int n[6];
	int total=0;
	
	cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4] >> n[5];
	total += n[0]*n[0]*n[0];
	total += n[1]*n[1]*n[1];
	total += n[2]*n[2]*n[2];
	total += n[3]*n[3]*n[3];
	total += n[4]*n[4]*n[4];
	total += n[5]*n[5]*n[5];
	cout << total << endl;
}  