#include <iostream> 
#include <vector>
#include <set>
#include <stack>
using namespace std; 
 
int main(){ 
	int n,x;
	vector<vector<int>> edge;
	vector<int> v;
	set<int> s;
	set<int> visit;
	stack<int> next;
	
	cin >> n;
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> x;
			v.push_back(x);
		}
		edge.push_back(v);
		v.clear();
	}
	next.push(0);
	s.insert(0);
	while(!next.empty()){
		x = next.top();
		next.pop();
		if(visit.find(x) == visit.end()){
			visit.insert(x);
			for(int i=0;i<n;i++){
				if(edge[x][i] == 1){
					if(s.find(i) == s.end()){
						s.insert(i);
						next.push(i);
					}
				}
			}
		}
	}
	
	if(s.size() == n){
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}
	return 0;
}