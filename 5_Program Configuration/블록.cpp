#include<iostream>

using namespace std;

int main()
{
	int a = 10;
	{
		int a = 20; // �� ��� �ȿ����� ��ȿ�� ��������
	}
	cout << a << endl;

	return 0;
}