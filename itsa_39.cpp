#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
 
int main(){
	int s1,s2,s3;
	int n,total,pass=0;
	bool over;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s1 >> s2 >> s3;
		pass = 0; over = false;
		total = s1 + s2 + s3;
		if(s1 >= 80||s2 >= 80||s3 >= 80){
			over = true;
		}
		if(s1 >= 60)
			pass++;
		if(s2 >= 60)
			pass++;
		if(s3 >= 60)
			pass++;
		if(pass == 3){
			cout << "P\n";
		} else if(pass == 2){
			if(total >= 220){
				cout << "P\n";
			} else {
				cout << "M\n";
			}
		} else if(over){
			cout << "M\n";
		} else {
			cout << "F\n";
		}
			
	}
	return 0;
}