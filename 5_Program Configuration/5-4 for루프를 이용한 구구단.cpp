#include<iostream>

using namespace std;

int main(){
	int dan;

	for (;;){
		cout << "���� ������ �̿��� ������ ��� ���α׷��Դϴ�." << endl;
		cout << "0�� �Է� �ϸ� ���� �մϴ�." << endl;
		cout << "����� ���� �Է��ϼ���: ";

		cin >> dan;

		if (dan == 0){
			cout << "������ ����� �����մϴ�" << endl;
			break;
		}
		if (dan<1 || dan>19){
			cout << "�߸� �Է��߽��ϴ�. �ٽ� �Է��ϼ���" << endl;
			continue;
		}
		cout << dan << "�� ��� �մϴ�." << endl;

		for (int i = 1; i <= 9; i++){
			cout << "       " << dan << "*" << "i" << "=" << (dan*i) << endl;
		}
	}

	return 0;
}