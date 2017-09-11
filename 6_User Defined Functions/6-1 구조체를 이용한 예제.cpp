#include <iostream>
#include <cstring>

using namespace std;

struct Student{
	int nNo;
	char szName[20];
};
void SetStudent(Student * pThis, int no, char* pName)
{
	pThis->nNo = no;
	strcpy(pThis->szName, pName);
}

void PrintStudent(Student* pThis)
{
	cout << "번호" << pThis->nNo;
	cout << ", 이름 : " << pThis->szName << endl;
}
int main()
{
	int no;
	char name[20];
	Student student;
	cout << "학생 번호 입력 : ";
	cin >> no;

	cout << "학생 이름 입력 : ";
	cin >> name;
	SetStudent(&student, no, name);
	PrintStudent(&student);
	return 0;
}