#include<iostream>
using namespace std;

int main(){
	char a;
	cout << "���ڸ� �Է����ּ���: ";
	cin >> a;
	if (a >= 65 && a <= 90) cout << (char)(a + 32) << endl; //�빮��
	else if (a >= 97 && a <= 122) cout << (char)(a - 32) << endl; //�ҹ���
	else cout << "�߸��Է��ϼ̽��ϴ�" << endl;

	// (a<='A' && a<='Z'),('a'-'A')
	// isupper(a),islower(a),isalpha(a) -> ���ʴ�� �빮��, �ҹ���, ���ĺ����� �ƴ��� Ȯ���ϴ� �Լ�

	return 0;
}