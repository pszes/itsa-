#include <iostream> 
#include <map>
#include <cctype>
#include <cstring>
using namespace std; 
 
  
int main(){ 
	map<char,int> m;
	char line[128];
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	for(int i=0;i<26;i++){
		m[alpha[i]] = 0;
	}
	fgets(line,128,stdin);
	for(int i=0;i<strlen(line);i++){
		if(isalpha(line[i])){
			if (isupper(line[i])) 
				line[i]=tolower(line[i]);
			m[line[i]]++;
		}
	}
	
	for(int i=0;i<26;i++){
		cout << m[alpha[i]];
		if(i!=25){
			cout << " ";
		} else{
			cout << endl;
		}
	}
	return 0;
}