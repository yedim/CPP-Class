#include<iostream>

using namespace std;

int main()
{
	int menuNo;

	cout << "*********************" << endl;
	cout << "         �޴�" << endl;
	cout << endl;
	cout << "[1] �����" << endl;
	cout << "[2] «   ��" << endl;
	cout << "[3] ��   ��" << endl;
	cout << "[4] ������" << endl;
	cout << endl;
	cout << "*********************" << endl;
	cout << endl;

	cout << "�޴� ��ȣ�� �Է� �ϼ���: ";
	cin >> menuNo;

	switch (menuNo){
	case 1:
		cout << "������� �����ϼ̽��ϴ�.." << endl;
		break;
	case 2:
		cout << "«���� �����ϼ̽��ϴ�.." << endl;
		break;
	case 3:
		cout << "����� �����ϼ̽��ϴ�.." << endl;
		break;
	case 4:
		cout << "�������� �����ϼ̽��ϴ�.." << endl;
		break;
	default:
		cout << "�߸� �Է� �ϼ̽��ϴ�." << endl;
		break;
	}
}