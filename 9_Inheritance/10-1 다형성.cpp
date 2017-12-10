#include <iostream>
#include <string.h>
using namespace std;

class Pet 
{
public: 
	char szName[20];//애완동물 이름
	Pet(char* pName){ strcpy(szName, pName); }
	//virtual void Speak(){ cout << "애완동물이 말 합니다."; }
	virtual void Speak() = 0;//순수가상함수.객체 생성막아줌.오버라이딩 꼭 해야됨. 추상메서드.
};
class Pup :public Pet
{
public:
	//Pup(char* pName) {}//기본생성자가 없어서 Error
	Pup(char* pName) : Pet(pName){}
	void Speak(){ /*Pet::Speak();*/  cout << "야~ : 멍멍!!" << endl; }
	void k(){ cout << "******************" << endl; }
};
class Cat :public Pet
{
public:
	Cat(char* pName) : Pet(pName){}
	void Speak(){ cout << "야~ : 야옹!!" << endl; }
};

int main()
{
	Pet* pPet = 0;

	Pup myPup("해피");
	Cat myCat("코코");

	pPet = &myPup;
	pPet->Speak();
	//pPet->k();//자식이 Overriding되어있어야 함.부모한테 없고 자식한테만 있으면 안됑!

	pPet = &myCat;
	pPet->Speak();

	//Pet* p=new Pet("토토");논리적오류발생가능성이 있음. (Pub*)p->Speak()
	
	return 0;
}