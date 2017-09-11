#include<iostream>

using namespace std;

int main()
{
	int a = 10;
	{
		int a = 20; // 이 블록 안에서만 유효한 지역변수
	}
	cout << a << endl;

	return 0;
}