#include <iostream>
using namespace std;

int main()
{
	char *pMessage = "welcome to korea";

	cout << pMessage << endl;//�ּҿ��� �������� ���� ����ִ�.

	cout << *(pMessage + 11) << endl;
	cout << *(pMessage + 12) << endl;
	cout << *(pMessage + 13) << endl;
	cout << *(pMessage + 14) << endl;
	cout << *(pMessage + 15) << endl;
	cout << sizeof(pMessage);


	return 0;
}