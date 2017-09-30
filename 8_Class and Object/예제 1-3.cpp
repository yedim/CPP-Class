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
	Student(Student &st)
	{
		this->nNo = st.nNo;
		this->szName = new char[20];
		strcpy(this->szName, st.szName);
	}
	void PrintStudent()
	{
		if (szName)
		{
			cout << "��ȣ : " << this->nNo << ", �̸� : " << this->szName << endl;
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
	Student operator=(Student &st) //�Ҵ翬���� �ߺ�����
	{
		if (this != &st)//�ּҸ� ���Ͽ� this�� st�� �ٸ���
		{
			this->nNo = st.nNo;
			this->szName = new char[20];
			strcpy(this->szName, st.szName);
		}	
		return *this;//st�Ǵ� this�� ����. st�� this�� �� �Ȱ�����

	}
};

int main()
{
	Student s1(5, "������");
	Student s2;//�⺻������ ȣ���� �� ()�ϸ� �ȵȴ�.
	s1.PrintStudent();
	s2.PrintStudent();

	//s2 = s1; // ������ ����. �ּҸ� ī���ؼ� ���� �޸𸮰����� ����Ų��. sz�� delete �ϸ� s1�� delete �Ұ� ��� debug ����
	s2=s1;
	s1.PrintStudent();
	s2.PrintStudent();

	strcpy(s2.szName, "�����");
	s1.PrintStudent();
	s2.PrintStudent();

	Student s3;
	s3.PrintStudent();

	s3 = s2 = s1;//Error. �ǿ����ڰ� ����. s3.operator=(s2.operator=(s1)); s2.operator=(s1)Ÿ���� ����void->Student�� �ؾߴ�.
	s1.PrintStudent();
	s2.PrintStudent();
	s3.PrintStudent();

	Student s4(0,"������");
	s4 = s4;
	s1.PrintStudent();
	s2.PrintStudent();
	s3.PrintStudent();
	s4.PrintStudent();

	//Student s5 = s4; // operator�� ���ٿԴ�. ���������� �����ٿ°���. ��ü�� ��������� ���� ���¿��� �Ҵ��Ϸ��� �ϴϱ� 
	//Student s5(s5); compile Error
	Student s5(s4);
	return 0;
}
