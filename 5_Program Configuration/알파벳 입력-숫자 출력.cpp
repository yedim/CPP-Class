#include<iostream>

using namespace std;

int main()
{
	char key;
	cout << "알파벳 한 문자를 입력 받아 숫자로 출력하는 프로그램";
	cout << "알파벳 한 문자를 입력해 주세요 >>";
	cin >> key;
	cout << (int)key << endl;
	return 0;
}