#include<iostream>
using namespace std;

int main(){ //절대값구하기
	int a;
	cout << "정수를 입력하세요: ";
	cin >> a;

	if (a > 0){ //a>=0
		cout << "절댓값: " << a << endl; //abs(a) -> 절댓값
	}
	else{
		cout << "절댓값: " << -a << endl;
	}

	/* if(a<0) a=a*-1;
	cout<<a<<endl; */
}