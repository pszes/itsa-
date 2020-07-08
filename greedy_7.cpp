#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main(){
	int n,x;
	vector<int> num;
	unsigned long long int ans;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		num.push_back(x);
	}
	sort(num.begin(),num.end());	
	if(*num.begin() == 0){
		for(vector<int>::iterator it=(num.begin()+1);it!=num.end();it++){
			if(*it != 0){
				*num.begin() = *it;
				*it = 0;
				break;
			}
		}			
	}
	if(*(num.begin()+1) == 0){
		for(vector<int>::iterator it=(num.begin()+2);it!=num.end();it++){
			if(*it != 0){
				*(num.begin()+1) = *it;
				*it = 0;
				break;
			}
		}			
	}
	
	ans = 0;
	for(vector<int>::iterator it=num.begin();it!=num.end();it++){
			x = ((n+1)/2)-1;
			ans += (*it)*pow(10.0,(double)x);
			n--;
		}	
	cout << ans <<endl;
	return 0;
}