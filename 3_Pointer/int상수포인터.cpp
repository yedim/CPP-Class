//����
//�迭�� �̿��ؼ�
#include <iostream>
using namespace std;

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	const int * p1 = a;
	cout << p1 << endl;
	p1++;//������ +1 == �� ���� ũ��
	cout << p1 << endl;
	//*p1 = 0;//����. ���� ������ �� ����.
	a[1] = 0;
	cout << *p1 << endl;


	int * const p2 = a;//�ּҰ� ���� ����.
	cout << p2 << endl;
	//p2++;//����. �����ּҷ� �̵� ����.
	cout << *p2 << endl;
	*p2 = 0;//0���� �ٲ�
	cout << *p2 << endl;


	const int * const p3 = a;//a�� ���� �ּҰ� �Ѵ� ���� ����.
	cout << p3 << endl;
	//p3++;//����
	cout << *p3 << endl;
	//*p3 = 0;//����
	cout << *p3 << endl;

	return 0;
}
//const int * p1 = 0;//p1�� �����Ⱚ������ 0 �־������. ���� ���� ������ ���ȭ
//const int c;//�ʱⰪ ��� ����
