#include<iostream>
using namespace std;

int main()
{
	char *pMessage = "welcome to korea";

	for (int i = 0;; i++)
	{
		if (*(pMessage + i) == 0)//null값을 만나면 종료
		{
			cout << "count = " << i << endl;
			break;
		}
	}

	for (int i = 0; *(pMessage + i) != NULL; i++)
	{
		if (*(pMessage + i) == ' ')
		{
			continue;
		}
		cout << *(pMessage + i);
	}
	cout << endl;
	for (int i = 0; *(pMessage + i) != NULL; i++)
	{
		cout << pMessage[i];
	}
}
