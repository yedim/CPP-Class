#include <iostream>
using namespace std;

int main()
{
	int input;
	int num[10];
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "숫자입력 : ";
		cin >> input;
		num[i] = input;
	}
	for (int i = 0; i < 10; i++)
	{
		if (num[i] % 2 == 0)
		{
			cout << num[i] << " ";
			sum += num[i];
		}

	}
	cout << " " << sum << endl;
}