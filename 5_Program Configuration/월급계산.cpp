#include<iostream>
using namespace std;

int main(){ //월급 돈 개수 계산
	int key, cnt = 0, mon, unit = 50000, sum = 0;
	bool flg = 1;

	cout << "월급을 입력해 주세요:";
	cin >> key;

	cout << key << endl;

	while (1){
		cnt = key / unit;
		sum += cnt;
		mon = key % unit;
		if (cnt != 0)cout << unit << "원권 " << cnt << "장" << endl;
		if (mon == 0)break;
		if (flg) unit = unit / 5;
		else unit = unit / 2;
		flg ^= 1; //둘이 같을 때 false
	}
	cout << "총" << sum << " 장" << endl;

	return 0;
}