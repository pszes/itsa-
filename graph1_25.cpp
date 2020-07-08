#include <iostream> 
#include <vector>
using namespace std; 
 
int main(){ 
	int n,x,odd=0;
	vector<vector<int>> edge;
	vector<int> v;
	
	cin >> n;
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> x;
			if(x == 1 && i != j){
				v.push_back(x);
			}
		}
		edge.push_back(v);
		v.clear();
	}
	for(int i = 0;i < n;i++){
		if(edge[i].size()%2==1){
			odd++;
		}
	}
	cout << odd << endl;
	if(odd == 0||odd == 2){
		cout << "Y\n";
	} else {
		cout << "N\n";
	}
	return 0;
}