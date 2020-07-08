#include <iostream>
#include <queue>
using namespace std;
 
int main(){
	int n;
	int t,m,k,price,low_cost;
	priority_queue<int,vector<int>,greater<int> > q;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> t >> m >> k;
		for(int j=0;j<k;j++){
			cin >> price;
			q.push(price);
		}
		low_cost = 0;
		for(int j=0;j<m;j++){
			price = q.top();
			q.pop();
			low_cost += price;
		}
		if(low_cost <= t){
			cout << low_cost << endl;
		} else{
			cout << "Impossible\n";
		}
		while(!q.empty()){
			q.pop();
		}
	}
	return 0;
}