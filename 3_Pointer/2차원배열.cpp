#include <iostream>

using namespace std;

int main()
{
	int nArrays[2][3] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 }
	};

	int *pArrays = &nArrays[0][0];

	cout << *pArrays << "," << *(pArrays + 1) << "," << *(pArrays + 2) << "," << endl;
	cout << *(pArrays + 3) << "," << *(pArrays + 4) << "," << *(pArrays + 5) << endl;

	int iSize = sizeof(nArrays) / sizeof(nArrays[0]);//전체크기/ 행크기로 나누면 = 행의 개수
	int jSize = sizeof(nArrays[0]) / sizeof(int);//행크기/열의 크기= 열의 개수

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << *(pArrays + (i * jSize + j)) << ",";
		}
		cout << endl;
	}

	cout << nArrays << endl << nArrays[0] << endl << &nArrays[0][0] << endl; //주소는 동일. 

	return 0;

}