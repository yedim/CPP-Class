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
		cout << "�⺻������" << endl;
		this->nNo = 0;
		this->szName[0] = 0;//�迭�̴ϱ� 0�濡 0.
	}
	Student(int nNo, char* szName)
	{
		cout << "�Ű����� �ִ� ������" << endl;
		this->nNo = nNo;
		strcpy(this->szName, szName);//���ڿ��� strcpy
	}
	void PrintStudent()
	{
		cout << "��ȣ : "<<this->nNo <<", �̸� : "<<this->szName<<endl;
	}
	~Student()
	{
		if (szName)
		{
			cout << szName << "�Ҹ���"<<endl;
		}
	}
};

int main()
{
	Student s1(5, "������");
	Student s2;//�⺻������ ȣ���� �� ()�ϸ� �ȵȴ�.
	s1.PrintStudent();
	s2.PrintStudent();

	s2 = s1;
	s1.PrintStudent();
	s2.PrintStudent();

	strcpy(s2.szName, "�����");
	s1.PrintStudent();
	s2.PrintStudent();

	return 0;
}
