#include <iostream>
#include <stack>
using namespace std;
 
int main(){
	int n,i;
	stack<int> output;
	
	while(cin >> n){
		if(n >= 0){
			while(n>0){
				output.push(n%2);
				n = n/2;
			}
			while(output.size()<8){
				output.push(0);
			}
		} else {
			n += 128;
			while(n>0){
				output.push(n%2);
				n = n/2;
			}
			while(output.size()<7){
				output.push(0);
			}
			output.push(1);
		}
		while(!output.empty()){
			i = output.top();
			output.pop();
			cout << i;
		}
		cout << endl;
	}
	return 0;
}