#include<iostream>
using namespace std;

int main(){
	char a;
	cout << "���ĺ��� �Է��Ͻÿ�: ";
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
		cout << "�߸��Է��߽��ϴ�" << endl;
	}
	return 0;
}