#include<iostream>

using namespace std;

void subFuncA(){
	int nVal = 10;

	cout << "subFuncA::nVal=" << nVal << endl;
	nVal++;//���������̹Ƿ� �Լ��� ����Ǹ� �� ������ ���ŵȴ�.
}
void subFuncB(){
	static int nVal = 10;

	cout << "subFuncB::static nVal=" << nVal << endl;
	//���� ���� �̹Ƿ� �Լ��� ����Ǵ��� �� ������
	//���ŵ��� �ʰ� �����ְ� �ȴ�.
	nVal++;
}
int main(){ //static test
	subFuncA();
	subFuncA();
	subFuncA();

	subFuncB();
	subFuncB();
	subFuncB();

	return 0;
}