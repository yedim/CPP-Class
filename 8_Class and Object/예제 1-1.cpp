#include <iostream>
#include <string.h>
using namespace std;

class Student
{
public: 
	int nNo;
	char szName[20];

public:
	Student()
	{
		cout << "기본생성자" << endl;
		this->nNo = 0;
		this->szName[0] = 0;//배열이니깐 0방에 0.
	}
	Student(int nNo, char* szName)
	{
		cout << "매개변수 있는 생성자" << endl;
		this->nNo = nNo;
		strcpy(this->szName, szName);//문자열은 strcpy
	}
	void PrintStudent()
	{
		cout << "번호 : "<<this->nNo <<", 이름 : "<<this->szName<<endl;
	}
	~Student()
	{
		if (szName)
		{
			cout << szName << "소멸자"<<endl;
		}
	}
};

int main()
{
	Student s1(5, "강아지");
	Student s2;//기본생성자 호출할 때 ()하면 안된다.
	s1.PrintStudent();
	s2.PrintStudent();

	s2 = s1;
	s1.PrintStudent();
	s2.PrintStudent();

	strcpy(s2.szName, "고양이");
	s1.PrintStudent();
	s2.PrintStudent();

	return 0;
}
