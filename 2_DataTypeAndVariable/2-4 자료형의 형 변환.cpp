#include<iostream>
using namespace std;

int main(){ //형변환 test
	int iCode = 1000;

	cout << iCode << "-> " << (char)iCode << endl;
	cout << iCode << "-> " << (int)(char)iCode << endl;

	iCode = (int)1.4321;
	cout << iCode << endl;

	//형변환을 해주지 않으면 컴파일러에서 경고 메시지가 출력된다.
	iCode = (int)1.5678;
	cout << iCode << endl;
	double dResult = 0.0;

	dResult = 100 + 3 / 2;
	cout << dResult << endl;

	//형변환의 또 다른 표현이다.(double)3/2와 동일하다
	dResult = 100 + double(3) / 2;
	cout << dResult << endl;

	return 0;
}