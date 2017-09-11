#include<iostream>
using namespace std;

int main(){
	char a;
	cout << "문자를 입력해주세요: ";
	cin >> a;
	if (a >= 65 && a <= 90) cout << (char)(a + 32) << endl; //대문자
	else if (a >= 97 && a <= 122) cout << (char)(a - 32) << endl; //소문자
	else cout << "잘못입력하셨습니다" << endl;

	// (a<='A' && a<='Z'),('a'-'A')
	// isupper(a),islower(a),isalpha(a) -> 차례대로 대문자, 소문자, 알파벳인지 아닌지 확인하는 함수

	return 0;
}