#include <iostream>
#include <string.h>

using namespace std;

struct Student
{
	int nNo;
	char szName[20];

	//함수의 프로토타입 선언
	void SetStudent(int no, char* pName);
	void PrintStudent();
};

//구조체 밖에 함수의 내용을 구현. 범위연산자(Scope Operator)을 사용한다.
void Student::SetStudent(int no, char* pName)
{
	(*this).nNo = no;
	strcpy((*this).szName, pName);
}

void Student::PrintStudent()
{
	cout << "번호" << nNo;
	cout << ", 이름 : " << szName << endl;
}
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