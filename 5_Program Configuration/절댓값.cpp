#include<iostream>
using namespace std;

int main(){ //���밪���ϱ�
	int a;
	cout << "������ �Է��ϼ���: ";
	cin >> a;

	if (a > 0){ //a>=0
		cout << "����: " << a << endl; //abs(a) -> ����
	}
	else{
		cout << "����: " << -a << endl;
	}

	/* if(a<0) a=a*-1;
	cout<<a<<endl; */
}