#include <iostream>

using namespace std;

//�ζ��� �Լ� ����
inline int Add(int a, int b) { return a + b; }//#define�ε� �Լ��� �Ǿ��ִ°� inline

int main()
{
	int value1 = 10;
	int value2 = 20;
	int sum = 0;

	sum = Add(value1, value2);//sum=value1+value2

	cout << value1 << " + " << value2 << " = " << sum << endl;

	return 0;
}