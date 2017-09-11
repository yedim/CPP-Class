#include<iostream>

using namespace std;
int main()
{
	char szMessage[2][12] = { "Hello Array", "안녕하세요" };//20....배열사이즈크게
	cout << szMessage << endl;//배열명 = 주소값
	cout << &szMessage[0] << endl;//주소값. 지워짐
	cout << szMessage[0] << endl;//값
	cout << szMessage[1][9] << endl;//
	cout << szMessage[1][10] << endl;//각각의 원소에는 문자 하나씩 들어있단다.
	cout << &szMessage[0][0] << endl;//값. 지워짐

	char *p = szMessage[0];// 
	cout << p << endl;


	//	char **p1 = szMessage;//error 다중포인터 써야 될걸...1차원배열은 이름만 쓰면되구 2차원 배열은 이름[] 이렇게 써야 되쥬

	char a[2][3][10] = {
		"가나다", "라마바", "사아자", "차카타", "파하아", "아야여"
	};

	cout << a[0][2] << endl;//3차원이면 2차원으로 , 2차원이면 1차원으로 찍어야 값이 나오죠.뒷꽁무니빼고 
	cout << a[0] << endl;
	cout << a[1] << endl;
	return 0;
}