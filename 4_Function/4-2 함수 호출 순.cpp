#include <iostream>
using namespace std;

//�Լ� ������Ÿ�� ����
void myFirstFunc();
void mySecondFunc();

void myFirstFunc()
{
	cout << "2)   ->myFirstFunc�Դϴ�" << endl;
	mySecondFunc();
	cout << "4)   ->myFirstFunc�Դϴ�." << endl;
}
void mySecondFunc()
{
	cout << "3)      ->mySecondFunc�Դϴ�." << endl;
}
int main()
{
	cout << "1)->main�Դϴ�" << endl;
	myFirstFunc();
	mySecondFunc();
	cout << "5)->main�Դϴ�" << endl;

	return 0;
}