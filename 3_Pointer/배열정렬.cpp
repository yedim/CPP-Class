#include <iostream>
using namespace std;

int main()
{
	int a[5];
	int b[5];
	int c[10];

	int i = 0, j = 0, k = 0;

	cout << "a�迭�� �����Է� " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}

	cout << "b�迭�� �����Է� " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> b[i];
	}

	while (i != 5 || j != 5)
	{
		if (i == 5) for (; j < 5;)c[k++] = b[j++];//a�迭�� ��á�� ��,�񱳰� �� �� ���� b�迭�� ���
		else if (j == 5) for (; i < 5;)c[k++] = a[i++];//b�迭�� ��á�� ��, �񱳰� �� �� ���� a�迭�� ���
		else//a�迭, b�迭 �Ѵ� ������ �ʾ��� ��
		{
			if (a[i] < b[j]) c[k++] = a[i++];//a�� ������ a�� index����
			else if (a[i]>b[j])c[k++] = b[j++];//b�� ������ b�� index����
			else
			{
				c[k++] = a[i++]; j++;//������ a�� index�� b�� index�� ����
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