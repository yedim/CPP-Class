#include <iostream>
using namespace std;

int main()
{
	char *pMessage = "welcome to korea";

	cout << pMessage << endl;//주소에는 포인터의 값이 들어있다.

	cout << *(pMessage + 11) << endl;
	cout << *(pMessage + 12) << endl;
	cout << *(pMessage + 13) << endl;
	cout << *(pMessage + 14) << endl;
	cout << *(pMessage + 15) << endl;
	cout << sizeof(pMessage);


	return 0;
}