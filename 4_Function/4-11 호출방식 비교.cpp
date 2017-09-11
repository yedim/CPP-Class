#include<iostream>

using namespace std;

void CallByValue(int value){
	value = value + 1;
	cout << "Call By Value: \t\t�ּ�:" << &value;
}
void CallByPointer(int *pValue){
	*pValue = *pValue + 1;
	cout << "Call By Pointer: \t�ּ�:" << pValue;
}
void CallByReference(int& value){
	value = value + 1;
	cout << "Call By Reference: \t�ּ�:" << &value;
}

int main(){
	int value = 10;

	cout << "�Լ� ȣ�� �� ���� ��:\t�ּ�: " << &value << ", ��: " << value << endl;

	CallByValue(value);
	cout << ", ��: " << value << endl;

	CallByPointer(&value);
	cout << ", ��: " << value << endl;

	CallByReference(value);
	cout << ", ��: " << value << endl;

	return 0;
}