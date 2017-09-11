#include<iostream>
#define MAX_COUNT 100
#define MAX(a,b) a>b?a:b

using namespace std;

int main(){ // 함수 상수 test

	cout << MAX_COUNT << endl;

	int nMax = MAX(100, 200);
	cout << nMax << endl;
	return 0;
}