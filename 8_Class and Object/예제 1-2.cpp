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
	void PrintStudent()
	{
		if (szName)
		{
			cout<<"번호 : " << this->nNo << ", 이름 : " << this->szName << endl;
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
	void operator=(Student &st) //할당연산자 중복정의
	{
		this->nNo = st.nNo;
		this->szName = new char[20];
		strcpy(this->szName, st.szName);
	}
};

int main()
{
	Student s1(5, "강아지");
	Student s2;//기본생성자 호출할 때 ()하면 안된다.
	s1.PrintStudent();
	s2.PrintStudent();

	//s2 = s1; // 논리적인 오류. 주소만 카피해서 같은 메모리공간을 가르킨다. sz를 delete 하면 s1이 delete 할게 없어서 debug 에러
	s2.operator=(s1);
	s1.PrintStudent();
	s2.PrintStudent();

	strcpy(s2.szName, "고양이");
	s1.PrintStudent();
	s2.PrintStudent();

	Student s3;
	s3.PrintStudent();

	return 0;
}
