#include <iostream>
#include <string.h>
using namespace std;

class Pet 
{
public: 
	char szName[20];//�ֿϵ��� �̸�
	Pet(char* pName){ strcpy(szName, pName); }
	//virtual void Speak(){ cout << "�ֿϵ����� �� �մϴ�."; }
	virtual void Speak() = 0;//���������Լ�.��ü ����������.�������̵� �� �ؾߵ�. �߻�޼���.
};
class Pup :public Pet
{
public:
	//Pup(char* pName) {}//�⺻�����ڰ� ��� Error
	Pup(char* pName) : Pet(pName){}
	void Speak(){ /*Pet::Speak();*/  cout << "��~ : �۸�!!" << endl; }
	void k(){ cout << "******************" << endl; }
};
class Cat :public Pet
{
public:
	Cat(char* pName) : Pet(pName){}
	void Speak(){ cout << "��~ : �߿�!!" << endl; }
};

int main()
{
	Pet* pPet = 0;

	Pup myPup("����");
	Cat myCat("����");

	pPet = &myPup;
	pPet->Speak();
	//pPet->k();//�ڽ��� Overriding�Ǿ��־�� ��.�θ����� ���� �ڽ����׸� ������ �ȉ�!

	pPet = &myCat;
	pPet->Speak();

	//Pet* p=new Pet("����");���������߻����ɼ��� ����. (Pub*)p->Speak()
	
	return 0;
}