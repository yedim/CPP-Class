#include <iostream>
#include <string.h>
using namespace std;

class Student
{
public:
	int nNo;
	char* szName;

public:
	Student()
	{
		cout << "기본생성자" << endl;
		this->nNo = 0;
		this->szName = new char[20];
		szName = 0;
	}
	Student(int nNo, char* szName)
	{
		cout << "매개변수 있는 생성자" << endl;
		this->nNo = nNo;
		this->szName = new char[20];
		strcpy(this->szName, szName);//문자열은 strcpy
	}
	Student(Student &st)
	{
		this->nNo = st.nNo;
		this->szName = new char[20];
		strcpy(this->szName, st.szName);
	}
	void PrintStudent()
	{
		if (szName)
		{
			cout << "번호 : " << this->nNo << ", 이름 : " << this->szName << endl;
		}
		else
		{
			cout << "번호 : " << this->nNo << endl;
		}
	}
	~Student()
	{
		if (szName)
		{
			cout << szName << "소멸자" << endl;
			delete[] szName; // szName이 있을 때만
		}
		else
		{
			cout << "소멸자" << endl;
		}
	}
	Student operator=(Student &st) //할당연산자 중복정의
	{
		if (this != &st)//주소를 비교하여 this와 st가 다르면
		{
			this->nNo = st.nNo;
			this->szName = new char[20];
			strcpy(this->szName, st.szName);
		}	
		return *this;//st또는 this를 리턴. st나 this나 다 똑같지만

	}
};

int main()
{
	Student s1(5, "강아지");
	Student s2;//기본생성자 호출할 때 ()하면 안된다.
	s1.PrintStudent();
	s2.PrintStudent();

	//s2 = s1; // 논리적인 오류. 주소만 카피해서 같은 메모리공간을 가르킨다. sz를 delete 하면 s1이 delete 할게 없어서 debug 에러
	s2=s1;
	s1.PrintStudent();
	s2.PrintStudent();

	strcpy(s2.szName, "고양이");
	s1.PrintStudent();
	s2.PrintStudent();

	Student s3;
	s3.PrintStudent();

	s3 = s2 = s1;//Error. 피연산자가 없다. s3.operator=(s2.operator=(s1)); s2.operator=(s1)타입이 지금void->Student로 해야댐.
	s1.PrintStudent();
	s2.PrintStudent();
	s3.PrintStudent();

	Student s4(0,"망아지");
	s4 = s4;
	s1.PrintStudent();
	s2.PrintStudent();
	s3.PrintStudent();
	s4.PrintStudent();

	//Student s5 = s4; // operator에 갔다왔다. 생성자한테 못갔다온거임. 객체가 만들어지지 않은 상태에서 할당하려고 하니깐 
	//Student s5(s5); compile Error
	Student s5(s4);
	return 0;
}
