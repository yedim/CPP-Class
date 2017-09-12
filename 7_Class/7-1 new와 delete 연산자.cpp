#include <iostream>
#include <string.h>

using namespace std;

class Student
{
private:
	int nNo;
	char* szName;

public:
	void SetStudent(int no, char* pName);
	void PrintStudent();
	Student();
	Student(int, char*);//������Ÿ���� ������ ������� �ʰ�, �ڷ����� �����.
	virtual ~Student()
	{
		if (szName != 0)
		{
			cout << szName << "�Ҹ���" << endl;
			delete[] szName;
		}
		else
		{
			cout << "�Ҹ���" << endl;
		}
	}
};
Student::Student()
{
	cout << "�⺻������" << endl;
	nNo = 0;
	szName = 0;
	//strcpy(this->szName, "�̸�����");

}
Student::Student(int nNo, char* szName)
{
	cout << "�Ű����� �ִ� ������" << endl;
	this->nNo = nNo;
	this->szName = new char[strlen(szName) + 1];
	strcpy(this->szName, szName);
}
void Student::SetStudent(int no, char* szName)
{
	(*this).nNo = no;
	this->szName = new char[strlen(szName) + 1];
	//this->szName = szName;
	strcpy((*this).szName, szName);
}
void Student::PrintStudent()
{
	if (szName != 0)
	{
		cout << "��ȣ" << nNo;
		cout << ", �̸� : " << szName << endl;
	}
}
int main()
{
	int no;
	char name[20];
	Student student;
	cout << sizeof(Student) << endl;

	cout << "�л� ��ȣ �Է� : ";
	cin >> no;
	cout << "�л� �̸� �Է� : ";
	cin >> name;

	student.SetStudent(no, name);
	student.PrintStudent();

	Student stu(2518, "��û");
	stu.PrintStudent();

	Student* p = new Student();
	p->PrintStudent();
	Student* p1 = new Student(1111, "ȫ�浿��");
	p1->PrintStudent();
	delete p;//��������� ������ ������� �Ҹ���.
	delete p1;

	return 0;
}