//숫자
//배열을 이용해서
#include <iostream>
using namespace std;

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	const int * p1 = a;
	cout << p1 << endl;
	p1++;//포인터 +1 == 한 방의 크기
	cout << p1 << endl;
	//*p1 = 0;//에러. 값을 수정할 수 없음.
	a[1] = 0;
	cout << *p1 << endl;


	int * const p2 = a;//주소값 변경 못함.
	cout << p2 << endl;
	//p2++;//에러. 다음주소로 이동 못함.
	cout << *p2 << endl;
	*p2 = 0;//0으로 바꿈
	cout << *p2 << endl;


	const int * const p3 = a;//a의 값과 주소값 둘다 변경 못함.
	cout << p3 << endl;
	//p3++;//에러
	cout << *p3 << endl;
	//*p3 = 0;//에러
	cout << *p3 << endl;

	return 0;
}
//const int * p1 = 0;//p1에 쓰레기값있으니 0 넣어줘야함. 따라간 곳의 내용이 상수화
//const int c;//초기값 없어서 에러
