#include<iostream>

using namespace std;

int nValue = 100;

void subFunc(){
	int nVal = 20;

	cout << "subFunc::전역변수 : " << nValue << endl;
	cout << "subFunc::지역변수 : " << nVal << endl;

	nValue = 200;
	nVal = 10;

	cout << "subFunc::전역변수 : " << nValue << endl;
	cout << "subFunc::지역변수 : " << nVal << endl;
}

int main(){ //변수 test
	int nValue = 10;

	cout << "main::전역변수 : " << ::nValue << endl;

	cout << "main::지역변수 : " << nValue << endl;
	subFunc();

	cout << "main::전역변수 : " << ::nValue << endl;
	cout << "main::지역변수 : " << nValue << endl;
}