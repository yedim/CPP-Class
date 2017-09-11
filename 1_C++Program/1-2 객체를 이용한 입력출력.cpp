#include<iostream>

using namespace std;

int main(){ //사칙연산
	int a, b;
	cout << "첫번째 숫자를 입력하세요" << endl;
	cin >> a;
	cout << "두번째 숫자를 입력하세요" << endl;
	cin >> b;
	cout << "ㅡㅡ사칙연산ㅡㅡ" << endl;
	cout << "덧셈 : " << a << "+" << b << "=" << a + b << endl;
	cout << "뺄셈 : " << a << "-" << b << "=" << a - b << endl;
	cout << "곱셈 : " << a << "*" << b << "=" << a*b << endl;
	cout << "나눗셈 : " << a << "/" << b << "=" << (double)a / b << endl;

	return 0;
}