#include <iostream>

using namespace std;

int main(){ // cin test
	int value;

	//(1)������ �Է¹޴� ���
	cout << "���� �Է� : ";
	cin >> value;
	cout << "���� ��� : " << value << endl;

	//(2)�ܾ �Է¹޴� ���
	char buffer[/*32*/4];

	cout << "���ڿ� �Է� : ";
	cin >> buffer;
	cout << "���ڿ� ��� : " << buffer << endl;

	return 0;
}