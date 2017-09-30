#include <iostream>
#include <string.h>
using namespace std;

class Student
{
public:
	int nNo;
	char* szName;

public:
	Student()
	{
		cout << "�⺻������" << endl;
		this->nNo = 0;
		this->szName = new char[20];
		szName = 0;
	}
	Student(int nNo, char* szName)
	{
		cout << "�Ű����� �ִ� ������" << endl;
		this->nNo = nNo;
		this->szName = new char[20];
		strcpy(this->szName, szName);//���ڿ��� strcpy
	}
	void PrintStudent()
	{
		if (szName)
		{
			cout<<"��ȣ : " << this->nNo << ", �̸� : " << this->szName << endl;
		}
		else
		{
			cout << "��ȣ : " << this->nNo << endl;
		}
	}
	~Student()
	{
		if (szName)
		{
			cout << szName << "�Ҹ���" << endl;
			delete[] szName; // szName�� ���� ����
		}
		else
		{
			cout << "�Ҹ���" << endl;
		}
	}
	void operator=(Student &st) //�Ҵ翬���� �ߺ�����
	{
		this->nNo = st.nNo;
		this->szName = new char[20];
		strcpy(this->szName, st.szName);
	}
};

int main()
{
	Student s1(5, "������");
	Student s2;//�⺻������ ȣ���� �� ()�ϸ� �ȵȴ�.
	s1.PrintStudent();
	s2.PrintStudent();

	//s2 = s1; // ������ ����. �ּҸ� ī���ؼ� ���� �޸𸮰����� ����Ų��. sz�� delete �ϸ� s1�� delete �Ұ� ��� debug ����
	s2.operator=(s1);
	s1.PrintStudent();
	s2.PrintStudent();

	strcpy(s2.szName, "�����");
	s1.PrintStudent();
	s2.PrintStudent();

	Student s3;
	s3.PrintStudent();

	return 0;
}
