#include<iostream>
using namespace std;

int main(){ //����ȯ test
	int iCode = 1000;

	cout << iCode << "-> " << (char)iCode << endl;
	cout << iCode << "-> " << (int)(char)iCode << endl;

	iCode = (int)1.4321;
	cout << iCode << endl;

	//����ȯ�� ������ ������ �����Ϸ����� ��� �޽����� ��µȴ�.
	iCode = (int)1.5678;
	cout << iCode << endl;
	double dResult = 0.0;

	dResult = 100 + 3 / 2;
	cout << dResult << endl;

	//����ȯ�� �� �ٸ� ǥ���̴�.(double)3/2�� �����ϴ�
	dResult = 100 + double(3) / 2;
	cout << dResult << endl;

	return 0;
}