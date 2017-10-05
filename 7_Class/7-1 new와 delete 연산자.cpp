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
	Student(int, char*);//프로토타입은 변수는 고려하지 않고, 자료형만 고려함.
	virtual ~Student()
	{
		cout << --nCount << " ";
		if (szName != 0)//이름이 있으면
		{
			cout << szName << "소멸자" << endl;
			delete[] szName;
		}
		else
		{
			cout << "소멸자" << endl;
		}
	}
};
Student::Student()
{
	cout << ++nCount << " ";
	cout << "기본생성자" << endl;
	nNo = 0;
	szName = 0;
	//strcpy(this->szName, "이름없음");

}
Student::Student(int nNo, char* szName)
{
	cout << ++nCount << " ";

	cout << "매개변수 있는 생성자" << endl;
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
		cout << "번호" << nNo;
		cout << ", 이름 : " << szName << endl;
	}
}
int Student::GetnCount()//정적 멤버 함수에는 정적 멤버변수만 들어가야됨.
{
	//cout << nNo << endl;//객체를 만들기 전에 사용할 수도 있음-> this포인터 타입 불분명.
	return nCount;
}
int Student::nCount = 0;

void a()
{
	Student k(3333,"연흥부");
}
int main()
{
	//cout << Student::nCount << endl;//객체 생성전에 정적멤버변수는 ::(범위연산자)사용.
	cout << Student::GetnCount << endl;//매개변수의 this포인터의 타입이 불분명->static

	int no;
	char name[20];
	Student student;
	//cout << student.nCount << endl;
	cout << student.GetnCount() << endl;//매개변수 this포인터가 student

	//cout << sizeof(Student) << endl;

	cout << "학생 번호 입력 : ";
	cin >> no;
	cout << "학생 이름 입력 : ";
	cin >> name;

	student.SetStudent(no, name);
	student.PrintStudent();

	/*Student stu;
	stu= Student(2518, "임청");*///이렇게 하면 안됨

	Student stu(2518, "임청");
	stu.PrintStudent();

	Student* p = new Student();
	p->PrintStudent();
	//cout << p->nCount << endl;//포인터는 -> 사용. student.nCount, Student::nCount,stu.nCount. 이전에 선언한 객체들로 nCount호출가능.
	cout << p->GetnCount() << endl;//매개변수 this포인터 타입은 객체 p.

	a();//객체가 지역변수. 지역변수는 함수가 끝날 때 소멸. 동적으로 만든애보다 먼저 소멸.

	Student* p1 = new Student(1111, "홍길동이");
	p1->PrintStudent();

	delete p;//만들어지는 순서와 상관없이 소멸함.
	delete p1;

	return 0;
}