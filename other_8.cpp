#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
	int n,time,x,output;
	vector<int> list;
	
	cin >> n;
	for(int i =0;i < n;i++){
		cin >> time;
		output = 0;
		cin >> x;
		while(x > 0){
			list.push_back(x);
			cin >> x;
		}
		sort(list.begin(),list.end());
		for(vector<int>::iterator it = list.begin();it != list.end();it++){
			if(*it<=time){
				time -= *it;
				output++;
			} else{
				break;
			}
		}
		cout << output << endl;
		list.clear();
	}
	
	return 0;
}