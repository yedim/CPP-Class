#include<iostream>

using namespace std;

int nValue = 100;

void subFunc(){
	int nVal = 20;

	cout << "subFunc::�������� : " << nValue << endl;
	cout << "subFunc::�������� : " << nVal << endl;

	nValue = 200;
	nVal = 10;

	cout << "subFunc::�������� : " << nValue << endl;
	cout << "subFunc::�������� : " << nVal << endl;
}

int main(){ //���� test
	int nValue = 10;

	cout << "main::�������� : " << ::nValue << endl;

	cout << "main::�������� : " << nValue << endl;
	subFunc();

	cout << "main::�������� : " << ::nValue << endl;
	cout << "main::�������� : " << nValue << endl;
}