#include <iostream>
using namespace std;

int main()
{
	short nArray[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	short *pArray = 0;
	pArray = nArray;//배열의 이름을 포인터 변수에 바로 저장.

	cout << "*pArray = " << *pArray << ", nArray[0] = " << nArray[0] << endl;

	*pArray = 10;
	cout << "*pArray = " << *pArray << ", nArray[0] = " << nArray[0] << endl;

	pArray = &nArray[1];
	cout << "*pArray = " << *pArray << ", nArray[1] = " << nArray[1] << endl;

	cout << "sizeof(pArray) = " << sizeof(pArray) << endl;
	cout << "sizeof(*pArray) = " << sizeof(*pArray) << endl;

	cout << "sizeof(nArray) = " << sizeof(nArray) << endl;

	return 0;
}