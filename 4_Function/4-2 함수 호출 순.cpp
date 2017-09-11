#include <iostream>
using namespace std;

//함수 프로토타입 선언
void myFirstFunc();
void mySecondFunc();

void myFirstFunc()
{
	cout << "2)   ->myFirstFunc입니다" << endl;
	mySecondFunc();
	cout << "4)   ->myFirstFunc입니다." << endl;
}
void mySecondFunc()
{
	cout << "3)      ->mySecondFunc입니다." << endl;
}
int main()
{
	cout << "1)->main입니다" << endl;
	myFirstFunc();
	mySecondFunc();
	cout << "5)->main입니다" << endl;

	return 0;
}