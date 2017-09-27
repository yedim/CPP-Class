#include <iostream>
#include <string.h>
using namespace std;


class Student
{
public :
	int nNo;
	char* szName;
public :
	Student()
	{
		nNo = 0;
		szName = 0;
		cout << "�⺻ ������" << endl;
	}
	Student(int no, char* name)
	{
		//cout << "�Ű����� �ִ� ������" << endl;
		nNo = no;
		szName = new char[strlen(name)+1];
		strcpy(szName, name);//;;;

		cout << szName << "������" << endl;

	}
	~Student(){
		delete[] szName;
		cout <<"�Ҹ���"<<endl;
	}

	void PrintStudent()
	{
		if (szName)
		{
			cout << nNo;
			cout << " " << szName << endl;
		}
	}
	void copy(Student &st)//�������� ������ �ʵ��� &
	{
		this->nNo= st.nNo;
		if (szName != 0)
		{
			delete[] szName;//�޸� ���� ����. �̹� ���� ������ ����
		}
		this->szName = new char[strlen(st.szName)+1];
		strcpy(this->szName, st.szName);
	}
	Student operator=(Student &st)//������ �ߺ�����(overloading)
	{
		if (this != &st)//�ּҺ�. ���� ������ ī��
		{
			copy(st);
		}
		return *this; //Student���̹Ƿ� *this, st
	}
};

int main()
{
	Student st1(10, "ȫ�浿");
	Student st2;//���߿� ����� ���� ������.
	st1.PrintStudent();//������ .���
	st2.PrintStudent();
	st2 = st1; //�޸𸮱��� ����Ǿ� st2�� szName�� st1�� szName�� ���� �޸𸮸� ����. 
	//st2.copy(st1);
	st1.PrintStudent();
	st2.PrintStudent();

	strcpy(st2.szName, "������");

	st1.PrintStudent();
	st2.PrintStudent();

	Student st3(20, "�����");
	st1.PrintStudent();
	st2.PrintStudent();
	st3.PrintStudent();

	st3 = st1;
	st1.PrintStudent();
	st2.PrintStudent();
	st3.PrintStudent();

	st1 = st1;//st1�� ���� ������ �ִ� ���� ����� �����Ⱚ�� �ְ� ��.
	st1.PrintStudent();

	st3 = st2 = st1;//a.operator=(b.operator=c)     b.operator=c�� �������� void�̹Ƿ� a.operator=�� �Ű������� student�� �ȵ��°���
	return 0;
}