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
		cout << "기본 생성자" << endl;
	}
	Student(int no, char* name)
	{
		//cout << "매개변수 있는 생성자" << endl;
		nNo = no;
		szName = new char[strlen(name)+1];
		strcpy(szName, name);//;;;

		cout << szName << "생성자" << endl;

	}
	~Student(){
		delete[] szName;
		cout <<"소멸자"<<endl;
	}

	void PrintStudent()
	{
		if (szName)
		{
			cout << nNo;
			cout << " " << szName << endl;
		}
	}
	void copy(Student &st)//지역변수 생기지 않도록 &
	{
		this->nNo= st.nNo;
		if (szName != 0)
		{
			delete[] szName;//메모리 누수 방지. 이미 값이 있으면 제거
		}
		this->szName = new char[strlen(st.szName)+1];
		strcpy(this->szName, st.szName);
	}
	Student operator=(Student &st)//연산자 중복정의(overloading)
	{
		if (this != &st)//주소비교. 같지 않으면 카피
		{
			copy(st);
		}
		return *this; //Student형이므로 *this, st
	}
};

int main()
{
	Student st1(10, "홍길동");
	Student st2;//나중에 만든게 먼저 없어짐.
	st1.PrintStudent();//정적은 .사용
	st2.PrintStudent();
	st2 = st1; //메모리까지 복사되어 st2의 szName와 st1의 szName가 같은 메모리를 쓴다. 
	//st2.copy(st1);
	st1.PrintStudent();
	st2.PrintStudent();

	strcpy(st2.szName, "강아지");

	st1.PrintStudent();
	st2.PrintStudent();

	Student st3(20, "고양이");
	st1.PrintStudent();
	st2.PrintStudent();
	st3.PrintStudent();

	st3 = st1;
	st1.PrintStudent();
	st2.PrintStudent();
	st3.PrintStudent();

	st1 = st1;//st1이 원래 가지고 있던 값을 지우고 쓰레기값를 넣게 됨.
	st1.PrintStudent();

	st3 = st2 = st1;//a.operator=(b.operator=c)     b.operator=c의 리턴형이 void이므로 a.operator=의 매개변수로 student가 안들어가는거쥬
	return 0;
}