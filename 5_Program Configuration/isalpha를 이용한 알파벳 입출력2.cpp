#include<iostream>
using namespace std;

int main(){
	char a;
	cout << "알파벳을 입력하시오: ";
	cin >> a;
	if (isalpha(a)){
		switch (a){
		case 'a':case 'A':
			cout << "America" << endl;
		case 'b':case 'B':
			cout << "Brazil" << endl;
		case 'c':case 'C':
			cout << "Canada" << endl;
		case 'd':case 'D':
			cout << "Denmark" << endl;
		case 'e':case 'E':
			cout << "England" << endl;
		default:
			cout << "Korea" << endl;
		}
	}
	else{
		cout << "잘못입력했습니다" << endl;
	}
	return 0;
}