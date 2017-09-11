#include<iostream>
using namespace std;

int main(){//나르시소스수
	int n1, n2, n3;
	for (int i = 100; i <= 999; i++){
		n1 = i / 100;
		n2 = i % 100 / 10;
		n3 = i % 10;
		if (i == pow(n1, 3) + pow(n2, 3) + pow(n3, 3))
			cout << i << "	";
	}
	return 0;
}