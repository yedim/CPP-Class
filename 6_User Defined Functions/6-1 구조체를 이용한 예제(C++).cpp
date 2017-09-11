#include <iostream>
#include <string.h>

using namespace std;

struct Student
{
	//멤버 변수 : 구조체 안에 정의된 변수
	int nNo;
	char szName[20];

	//멤버 함수 : 구조체 안에 정의된 함수
	void SetStudent(int no, char* pName)
	{
		nNo = no;
		strcpy(szName, pName);
	}

	void PrintStudent()
	{
		cout << "번호" << nNo;
		cout << ", 이름 : " << szName << endl;
	}
};

int main()
{
	int no;
	char name[20];
	Student student;
	cout << "학생 번호 입력 : ";
	cin >> no;

	cout << "학생 이름 입력 : ";
	cin >> name;
	student.SetStudent(no, name);
	student.PrintStudent();
	return 0;
}