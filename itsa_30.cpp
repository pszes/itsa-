#include <iostream>
#include <cstring>
using namespace std;
 
int main(){
	int m,d;
	int total =0;
	cin >> m >> d;
	switch(m){
		case 1:
			total += 0;
			break;
		case 2:
			total += 31;
			break;
		case 3:
			total += 59;
			break;
		case 4:
			total += 90;
			break;
		case 5:
			total += 120;
			break;
		case 6:
			total += 151;
			break;
		case 7:
			total += 181;
			break;
		case 8:
			total += 212;
			break;
		case 9:
			total += 243;
			break;
		case 10:
			total += 273;
			break;
		case 11:
			total += 304;
			break;
		case 12:
			total += 334;
			break;
		default:
			break;
	}
	total += d;
	if(total <= 20 || total >= 356){
		cout << "Capricorn\n";
	} else if(total <= 50){
		cout << "Aquarius\n";
	} else if(total <= 79){
		cout << "Pisces\n";
	} else if(total <= 110){
		cout << "Aries\n";
	} else if(total <= 141){
		cout << "Taurus\n";
	} else if(total <= 172){
		cout << "Gemini\n";
	} else if(total <= 203){
		cout << "Cancer\n";
	} else if(total <= 235){
		cout << "Leo\n";
	} else if(total <= 266){
		cout << "Virgo\n";
	} else if(total <= 296){
		cout << "Libra\n";
	} else if(total <= 326){
		cout << "Scorpio\n";
	} else if(total <= 355){
		cout << "Sagittarius\n";
	}
	
	return 0;
}