#include<iostream>
using namespace std;

int main(){
	char key;
	cout << "���ĺ��� �Է����ּ���: ";
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
	else	cout << "�߸��� �Է��Դϴ�" << endl;
	return 0;
}
//for (char p = ('Z' - key) ? 'Z' : 'z'; key <= p; key++)