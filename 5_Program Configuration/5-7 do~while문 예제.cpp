#include<iostream>

using namespace std;

int main(){
	char answer;
	do{
		cout << "��� ���� �Ͻðڽ��ϴ�?" << endl;
		cout << "����Ϸ��� 'Y'�� �����Ϸ��� 'N'�� ��������." << endl;
		cin >> answer;
	} while ((answer != 'Y') && (answer != 'N') && (answer != 'y') && (answer != 'n'));

	if ((answer != 'Y') || (answer != 'y')){
		cout << "��� �����մϴ�" << endl;
	}
	else{
		cout << "�����մϴ�." << endl;
	}
	return 0;
}