#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

 
int main(){
	int n,len;
	char buf[128];
	bool flag;

	while(cin >> n){
		flag =true;
		sprintf(buf,"%d",n);
		len = strlen(buf);
		for(int i=0;i<len;i++){
			if(buf[i] != buf[len - i - 1]){
				flag = false;
				break;
			}
		}
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}