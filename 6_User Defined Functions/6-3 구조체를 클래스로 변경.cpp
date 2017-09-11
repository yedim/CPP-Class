#include <iostream>
#include <string.h>

using namespace std;

class Student
{
private:
	int nNo;
	char szName[20];
	
public: 
	void SetStudent(int no, char* pName);
	void PrintStudent();
	Student();
	Student(int , char*);//프로토타입은 변수는 고려하지 않고, 자료형만 고려함.
};
Student::Student()
{
	cout << "기본생성자" << endl;
	nNo = 0;
	szName[0] = 0;
}
Student::Student(int nNo, char* szName)
{
	cout << "매개변수 있는 생성자" << endl;
	this->nNo = nNo;
	strcpy(this->szName, szName);

}
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

	Student stu(2518, "임청");
	stu.PrintStudent();

	return 0;
}