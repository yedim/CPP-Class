#include <iostream>
#include <string.h>

using namespace std;

struct Student
{
	//��� ���� : ����ü �ȿ� ���ǵ� ����
	int nNo;
	char szName[20];

	//��� �Լ� : ����ü �ȿ� ���ǵ� �Լ�
	void SetStudent(int no, char* pName)
	{
		nNo = no;
		strcpy(szName, pName);
	}

	void PrintStudent()
	{
		cout << "��ȣ" << nNo;
		cout << ", �̸� : " << szName << endl;
	}
};

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