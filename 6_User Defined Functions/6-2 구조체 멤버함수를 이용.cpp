#include <iostream>
#include <string.h>

using namespace std;

struct Student
{
	int nNo;
	char szName[20];

	//�Լ��� ������Ÿ�� ����
	void SetStudent(int no, char* pName);
	void PrintStudent();
};

//����ü �ۿ� �Լ��� ������ ����. ����������(Scope Operator)�� ����Ѵ�.
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


	return 0;
}