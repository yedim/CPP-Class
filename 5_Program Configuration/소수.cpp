#include<iostream>
using namespace std;

int main(){//¼Ò¼ö
	for (int i = 2; i <= 1000; i++){
		int cnt = 0;
		for (int j = 1; j <= i / 2; j++)
			if (i%j == 0) cnt++;
		if (cnt == 1) cout << i << "	";
	}
	return 0;
}