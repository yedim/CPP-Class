#include<iostream>
using namespace std;

int main(){ //���� �� ���� ���
	int key, cnt = 0, mon, unit = 50000, sum = 0;
	bool flg = 1;

	cout << "������ �Է��� �ּ���:";
	cin >> key;

	cout << key << endl;

	while (1){
		cnt = key / unit;
		sum += cnt;
		mon = key % unit;
		if (cnt != 0)cout << unit << "���� " << cnt << "��" << endl;
		if (mon == 0)break;
		if (flg) unit = unit / 5;
		else unit = unit / 2;
		flg ^= 1; //���� ���� �� false
	}
	cout << "��" << sum << " ��" << endl;

	return 0;
}