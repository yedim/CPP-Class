#include <iostream>
using namespace std;

void myFunc();//프로토타입 함수 선언

int main()
{
	myFunc();
}
void myFunc()
{
	cout << "사용자가 만든 함수입니다." << endl;
}