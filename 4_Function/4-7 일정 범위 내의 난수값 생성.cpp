#include<iostream>
#include<time.h>

using namespace std;

int main(){
	srand((unsigned)time(0));
	int value = 0;
	for (int i = 0; i < 10; i++){
		value = 50 + (rand() % 50); //50���� ũ�� 100���� �۰�
		cout << i << ": ������ :" << value << endl;
	}
}