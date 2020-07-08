#include <iostream>
#include <string>
using namespace std;
 
void led(int i,int j){
	switch(i){
		case 0:
			switch(j){
				case 0:
					cout << "*****";
					break;
				case 1:
					cout << "*   *";
					break;
				case 2:
					cout << "*   *";
					break;
				case 3:
					cout << "*   *";
					break;
				case 4:
					cout << "*****";
					break;
			}
			break;
		case 1:
			switch(j){
				case 0:
					cout << "    *";
					break;
				case 1:
					cout << "    *";
					break;
				case 2:
					cout << "    *";
					break;
				case 3:
					cout << "    *";
					break;
				case 4:
					cout << "    *";
					break;
			}
			break;
		case 2:
			switch(j){
				case 0:
					cout << "*****";
					break;
				case 1:
					cout << "    *";
					break;
				case 2:
					cout << "*****";
					break;
				case 3:
					cout << "*    ";
					break;
				case 4:
					cout << "*****";
					break;
			}
			break;
		case 3:
			switch(j){
				case 0:
					cout << "*****";
					break;
				case 1:
					cout << "    *";
					break;
				case 2:
					cout << "*****";
					break;
				case 3:
					cout << "    *";
					break;
				case 4:
					cout << "*****";
					break;
			}
			break;
		case 4:
			switch(j){
				case 0:
					cout << "*   *";
					break;
				case 1:
					cout << "*   *";
					break;
				case 2:
					cout << "*****";
					break;
				case 3:
					cout << "    *";
					break;
				case 4:
					cout << "    *";
					break;
			}
			break;
		case 5:
			switch(j){
				case 0:
					cout << "*****";
					break;
				case 1:
					cout << "*    ";
					break;
				case 2:
					cout << "*****";
					break;
				case 3:
					cout << "    *";
					break;
				case 4:
					cout << "*****";
					break;
			}
			break;
		case 6:
			switch(j){
				case 0:
					cout << "*    ";
					break;
				case 1:
					cout << "*    ";
					break;
				case 2:
					cout << "*****";
					break;
				case 3:
					cout << "*   *";
					break;
				case 4:
					cout << "*****";
					break;
			}
			break;
		case 7:
			switch(j){
				case 0:
					cout << "*****";
					break;
				case 1:
					cout << "    *";
					break;
				case 2:
					cout << "    *";
					break;
				case 3:
					cout << "    *";
					break;
				case 4:
					cout << "    *";
					break;
			}
			break;
		case 8:
			switch(j){
				case 0:
					cout << "*****";
					break;
				case 1:
					cout << "*   *";
					break;
				case 2:
					cout << "*****";
					break;
				case 3:
					cout << "*   *";
					break;
				case 4:
					cout << "*****";
					break;
			}
			break;
		case 9:
			switch(j){
				case 0:
					cout << "*****";
					break;
				case 1:
					cout << "*   *";
					break;
				case 2:
					cout << "*****";
					break;
				case 3:
					cout << "    *";
					break;
				case 4:
					cout << "    *";
					break;
			}
			break;
	}
}

int trans(char num){
	switch(num){
		case '0':
			return 0;
		case '1':
			return 1;
		case '2':
			return 2;
		case '3':
			return 3;
		case '4':
			return 4;
		case '5':
			return 5;
		case '6':
			return 6;
		case '7':
			return 7;
		case '8':
			return 8;
		case '9':
			return 9;
		default:
			return 10;
	}
}
int main(){
	int n[4];
	char num[4];
	
	cin >> num;
	n[0] = trans(num[0]);
	n[1] = trans(num[1]);
	n[2] = trans(num[2]);
	n[3] = trans(num[3]);

	for(int count = 0;count < 4;count++){
		led(n[count],0);
		if(count == 3)
			cout << endl;
		else
			cout << " ";
	}
	for(int count = 0;count < 4;count++){
		led(n[count],1);
		if(count == 3)
			cout << endl;
		else
			cout << " ";
	}
	for(int count = 0;count < 4;count++){
		led(n[count],2);
		if(count == 3)
			cout << endl;
		else
			cout << " ";
	}
	for(int count = 0;count < 4;count++){
		led(n[count],3);
		if(count == 3)
			cout << endl;
		else
			cout << " ";
	}
	for(int count = 0;count < 4;count++){
		led(n[count],4);
		if(count == 3)
			cout << endl;
		else
			cout << " ";
	}
	
	return 0;
}