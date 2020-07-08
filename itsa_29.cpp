#include <iostream>
#include <cstring>
using namespace std;
 
int main(){
	char A1,c;
	int N[10],X1,X2,P;
	A1 = cin.get();
	for(int i=1;i<=9;i++){
		c = cin.get();
		N[i] = ((int)c)-48;
	}
	switch(A1){
		case 'A':
			X1 = 1;
			X2 = 0;
			break;
		case 'B':
			X1 = 1;
			X2 = 1;
			break;
		case 'C':
			X1 = 1;
			X2 = 2;
			break;
		case 'D':
			X1 = 1;
			X2 = 3;
			break;
		case 'E':
			X1 = 1;
			X2 = 4;
			break;
		case 'F':
			X1 = 1;
			X2 = 5;
			break;
		case 'G':
			X1 = 1;
			X2 = 6;
			break;
		case 'H':
			X1 = 1;
			X2 = 7;
			break;
		case 'J':
			X1 = 1;
			X2 = 8;
			break;
		case 'K':
			X1 = 1;
			X2 = 9;
			break;
		case 'L':
			X1 = 2;
			X2 = 0;
			break;
		case 'M':
			X1 = 2;
			X2 = 1;
			break;
		case 'N':
			X1 = 2;
			X2 = 2;
			break;
		case 'P':
			X1 = 2;
			X2 = 3;
			break;
		case 'Q':
			X1 = 2;
			X2 = 4;
			break;
		case 'R':
			X1 = 2;
			X2 = 5;
			break;
		case 'S':
			X1 = 2;
			X2 = 6;
			break;
		case 'T':
			X1 = 2;
			X2 = 7;
			break;
		case 'U':
			X1 = 2;
			X2 = 8;
			break;
		case 'V':
			X1 = 2;
			X2 = 9;
			break;
		case 'X':
			X1 = 3;
			X2 = 0;
			break;
		case 'Y':
			X1 = 3;
			X2 = 1;
			break;
		case 'W':
			X1 = 3;
			X2 = 2;
			break;
		case 'Z':
			X1 = 3;
			X2 = 3;
			break;
		case 'I':
			X1 = 3;
			X2 = 4;
			break;
		case 'O':
			X1 = 3;
			X2 = 5;
			break;
		default:
			break;
	}
	P = X1 + 9*X2 + 8*N[1] + 7*N[2] + 6*N[3] + 5*N[4] + 4*N[5] + 3*N[6] + 2*N[7] + N[8] + N[9];
	if(P%10 == 0){
		cout << "CORRECT!!!\n";
	} else {
		cout << "WRONG!!!\n";
	}
	return 0;
}