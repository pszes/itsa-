#include <iostream>
using namespace std;
 
int main(){
	int n,step,record[2];
	int a[100];
	
	n = 0;
	while(cin >> a[n]){
		n++;
	}
	step = 0;
	int i=0;
	while(i != n-1){
		if(i+a[i]>=n-1){
			i = n-1;
		} else {
			record[1] = 0;
			for(int j = i+1;j<=i+a[i];j++){
				if(j+a[j]>record[1]){
					record[1] =j+a[j];
					record[0] = j;
				}
			}
			i = record[0];
		}
		step ++;
	}
	cout << step << endl;
	
	return 0;
}