#include <iostream>
using namespace std;

int main()
{
	int a[5];
	int b[5];
	int c[10];

	int i = 0, j = 0, k = 0;

	cout << "a배열의 숫자입력 " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}

	cout << "b배열의 숫자입력 " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> b[i];
	}

	while (i != 5 || j != 5)
	{
		if (i == 5) for (; j < 5;)c[k++] = b[j++];//a배열이 꽉찼을 때,비교가 안 된 남은 b배열을 출력
		else if (j == 5) for (; i < 5;)c[k++] = a[i++];//b배열이 꽉찼을 때, 비교가 안 된 남은 a배열을 출력
		else//a배열, b배열 둘다 꽉차지 않았을 때
		{
			if (a[i] < b[j]) c[k++] = a[i++];//a가 작으면 a의 index증가
			else if (a[i]>b[j])c[k++] = b[j++];//b가 작으면 b의 index증가
			else
			{
				c[k++] = a[i++]; j++;//같으면 a의 index와 b의 index를 증가
			}
		}
	}

	for (int i = 0; i<k; i++)
	{
		cout << c[i] << " ";
	}
	cout << endl;

	return 0;
}