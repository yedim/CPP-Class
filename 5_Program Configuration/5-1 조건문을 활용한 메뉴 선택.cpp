#include<iostream>
using namespace std;

int main()
{
	int menuNo;

	cout << "***************************" << endl;
	cout << "�޴�" << endl;
	cout << endl;
	cout << "[1] �����" << endl;
	cout << "[2] «   ��" << endl;
	cout << "[3] ��   ��" << endl;
	cout << "[4] ������" << endl;
	cout << endl;
	cout << "***************************" << endl;
	cout << endl;

	cout << "�޴� ��ȣ�� �Է��ϼ���: ";

	cin >> menuNo;

	if (menuNo == 1){
		cout << "������� ���� �ϼ̽��ϴ�." << endl;
	}
	else if (menuNo == 2){
		cout << "«���� ���� �ϼ̽��ϴ�." << endl;
	}
	else if (menuNo == 3){
		cout << "����� ���� �ϼ̽��ϴ�." << endl;
	}
	else if (menuNo == 4){
		cout << "�������� ���� �ϼ̽��ϴ�." << endl;
	}
	else{
		cout << "�߸� �Է� �ϼ̽��ϴ�." << endl;
	}
}