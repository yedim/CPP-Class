#include<iostream>

using namespace std;
int main()
{
	char szMessage[2][12] = { "Hello Array", "�ȳ��ϼ���" };//20....�迭������ũ��
	cout << szMessage << endl;//�迭�� = �ּҰ�
	cout << &szMessage[0] << endl;//�ּҰ�. ������
	cout << szMessage[0] << endl;//��
	cout << szMessage[1][9] << endl;//
	cout << szMessage[1][10] << endl;//������ ���ҿ��� ���� �ϳ��� ����ִܴ�.
	cout << &szMessage[0][0] << endl;//��. ������

	char *p = szMessage[0];// 
	cout << p << endl;


	//	char **p1 = szMessage;//error ���������� ��� �ɰ�...1�����迭�� �̸��� ����Ǳ� 2���� �迭�� �̸�[] �̷��� ��� ����

	char a[2][3][10] = {
		"������", "�󸶹�", "�����", "��īŸ", "���Ͼ�", "�ƾ߿�"
	};

	cout << a[0][2] << endl;//3�����̸� 2�������� , 2�����̸� 1�������� ���� ���� ������.�޲ǹ��ϻ��� 
	cout << a[0] << endl;
	cout << a[1] << endl;
	return 0;
}