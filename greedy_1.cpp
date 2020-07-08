#include <iostream>
#include <map>
#include <string>
using namespace std;
 
int main(){
	int n,k;
	string camp;
	map<int,bool> watch;
	
	cin >> k;
	for(int i=0;i<k;i++){
		cin >> n >> camp;
		for(int j=0;j<n;j++){
			if(camp[j] == '.'){
				if(watch.find(j-1)==watch.end()&&watch.find(j)==watch.end()){
					watch[j+1] == true; 
				}
			}
		}
		cout << watch.size() << endl;
		watch.clear();
	}
	
	return 0;
}