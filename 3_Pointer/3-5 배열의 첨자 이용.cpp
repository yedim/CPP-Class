#include <iostream>
using namespace std;

int main()
{
	int nArray[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int count = sizeof(nArray) / sizeof(int);

	for (int i = 0; i < count; i++)
	{
		cout << i << ":" << nArray[i] << endl;
	}
	cout << sizeof(nArray) << endl;

	return 0;
}