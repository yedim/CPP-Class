#include <iostream>
#include <cstring>

using namespace std;

class Student
{
public:
	int nNo;
	char* szName;
protected:
	static int nCount;
public:
	static int GetnCount();
	void SetStudent(int no, char* pName);
	void PrintStudent();
	Student();
	Student(int, char*);//������Ÿ���� ������ ������� �ʰ�, �ڷ����� �����.
	virtual ~Student()
	{
		cout << --nCount << " ";
		if (szName != 0)//�̸��� ������
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
	cout << ++nCount << " ";
	cout << "�⺻������" << endl;
	nNo = 0;
	szName = 0;
	//strcpy(this->szName, "�̸�����");

}
Student::Student(int nNo, char* szName)
{
	cout << ++nCount << " ";

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
int Student::GetnCount()//���� ��� �Լ����� ���� ��������� ���ߵ�.
{
	//cout << nNo << endl;//��ü�� ����� ���� ����� ���� ����-> this������ Ÿ�� �Һи�.
	return nCount;
}
int Student::nCount = 0;

void a()
{
	Student k(3333,"�����");
}
int main()
{
	//cout << Student::nCount << endl;//��ü �������� ������������� ::(����������)���.
	cout << Student::GetnCount << endl;//�Ű������� this�������� Ÿ���� �Һи�->static

	int no;
	char name[20];
	Student student;
	//cout << student.nCount << endl;
	cout << student.GetnCount() << endl;//�Ű����� this�����Ͱ� student

	//cout << sizeof(Student) << endl;

	cout << "�л� ��ȣ �Է� : ";
	cin >> no;
	cout << "�л� �̸� �Է� : ";
	cin >> name;

	student.SetStudent(no, name);
	student.PrintStudent();

	/*Student stu;
	stu= Student(2518, "��û");*///�̷��� �ϸ� �ȵ�

	Student stu(2518, "��û");
	stu.PrintStudent();

	Student* p = new Student();
	p->PrintStudent();
	//cout << p->nCount << endl;//�����ʹ� -> ���. student.nCount, Student::nCount,stu.nCount. ������ ������ ��ü��� nCountȣ�Ⱑ��.
	cout << p->GetnCount() << endl;//�Ű����� this������ Ÿ���� ��ü p.

	a();//��ü�� ��������. ���������� �Լ��� ���� �� �Ҹ�. �������� ����ֺ��� ���� �Ҹ�.

	Student* p1 = new Student(1111, "ȫ�浿��");
	p1->PrintStudent();

	delete p;//��������� ������ ������� �Ҹ���.
	delete p1;

	return 0;
}