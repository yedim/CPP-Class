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
	Student(int , char*);//������Ÿ���� ������ ������� �ʰ�, �ڷ����� �����.
};
Student::Student()
{
	cout << "�⺻������" << endl;
	nNo = 0;
	szName[0] = 0;
}
Student::Student(int nNo, char* szName)
{
	cout << "�Ű����� �ִ� ������" << endl;
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
	cout << "��ȣ" << nNo;
	cout << ", �̸� : " << szName << endl;
}
int main()
{
	int no;
	char name[20];
	Student student;

	cout << "�л� ��ȣ �Է� : ";
	cin >> no;

	cout << "�л� �̸� �Է� : ";
	cin >> name;

	student.SetStudent(no, name);
	student.PrintStudent();

	Student stu(2518, "��û");
	stu.PrintStudent();

	return 0;
}