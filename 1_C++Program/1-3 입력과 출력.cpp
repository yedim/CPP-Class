#include <iostream>

using namespace std;

int main(){ // cin test
	int value;

	//(1)정수를 입력받는 경우
	cout << "정수 입력 : ";
	cin >> value;
	cout << "정수 출력 : " << value << endl;

	//(2)단어를 입력받는 경우
	char buffer[/*32*/4];

	cout << "문자열 입력 : ";
	cin >> buffer;
	cout << "문자열 출력 : " << buffer << endl;

	return 0;
}