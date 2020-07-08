#include <iostream> 
#include <map>
using namespace std; 
 
  
int main(){ 
	int n,x;
	map<int,bool> m;
	
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> x;
		if(m.find(x)!=m.end()){
			cout << 0 << endl;
			return 0;
		} else {
			m[x] = true;
		}
	}
	cout << 1 << endl;
	return 0;
}