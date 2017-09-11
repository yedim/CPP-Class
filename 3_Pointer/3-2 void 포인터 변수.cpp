#include <iostream>

using namespace std;

int main()
{
	char value = 'A';
	void * pValue = 0;

	pValue = &value;

	cout << "pValue = " << pValue << endl;
	cout << "*pValue = " << *(char*)pValue << endl;
	cout << "value = " << value << endl;

	*(char*)pValue = 'B';

	cout << "pValue = " << pValue << endl;
	cout << "*pValue = " << *(char *)pValue << endl;
	cout << "value = " << value << endl;

	cout << (char *)pValue << endl;//pValue는 문자열이므로 주소를 출력하면 주소말고 값을 찍는다. *(char *)는 B(한글자만)찍고 (char*)는 B찍고 널만날때까지. 

	return 0;
}