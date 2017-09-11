#include<iostream>
using namespace std;

int main(){
	char key;
	cout << "알파벳을 입력해주세요: ";
	cin >> key;
	if (isalpha(key)){
		if (isupper(key)){
			for (key; key <= 'Z'; key++)
				cout << key << endl;
		}
		else{
			for (key; key <= 'z'; key++)
				cout << key << endl;
		}
	}
	else	cout << "잘못된 입력입니다" << endl;
	return 0;
}
//for (char p = ('Z' - key) ? 'Z' : 'z'; key <= p; key++)