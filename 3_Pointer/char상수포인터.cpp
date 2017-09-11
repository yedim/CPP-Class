#include <iostream>
using namespace std;

int main()
{
	const char * p1 = "abcd";
	cout << p1 << endl;//내용이 찍힘. 문자열은 주소 안찍힘

	p1++;//1바이트 이동. 널을 만나기 전까지 찍힘. 
	cout << p1 << endl;//bcd

	//*p1 = 'k';//내용못바꾼다구!
	p1--;
	cout << p1 << endl;//abcd

	p1 = "kbcd";//또 다른 주소, 공간을 가르키기 때문에.
	cout << p1 << endl;//kbcd
	//하나하나 바꾸는 건 안되지만 통째로 바꿀 수 있고, 주소는 바꿀수 있다=>내용,주소 모두 가능


	char * const  p2 = "abcd";//*****주의******
	cout << p2 << endl;//abcd

	//p2++;//에러. 
	cout << p2 << endl;//abcd

	//*p2 = 'k';//OK. 메모리 바꾸는 게 안되는 것 뿐 메모리 내용바꾸는 건 괜춘.그러나 디버깅에러!!!!!

	char *p3 = p2;
	*p3 = 'k';//디버깅 에러. p2공간 자체가 const되어서 p3로 돌아서 가도 안된다. 

	//p2--;//에러
	cout << p2 << endl;//디버깅 에러 때문에 출력이 안됨.

	//p2 = "kbcd";//또 다른 주소, 공간을 가르키기 때문에.
	cout << p2 << endl;//

	//**주소를 상수화 시킬 때 주소 뿐만아니라 내용을 바꾸는 것 또한 디버깅 에러발생.** => 내용, 주소 모두 안됨.런타임 에러.


	const char * const p4 = "abcd";//내용 주소 모두 안됨.

	return 0;
}