#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
 
int main(){
	char line[100];
	int n,x;
	
	cin.getline(line,100);
	cin >> n;
	for(int i=0;i<strlen(line);i++){
		if(isalpha(line[i])){
			x = (int)line[i] + n;
			if((int)line[i] <= 90 && x > 90){
				x -= 26;
			} else if(x > 122){
				x -= 26;
			}
			cout << (char)x;
		} else if(isdigit(line[i])){
			x = (int)line[i] + n;
			if(x > 57){
				x -= 10;
			}
			cout << (char)x;
		}else {
			cout << line[i];
		}
	}
	cout << endl;
	return 0;
}