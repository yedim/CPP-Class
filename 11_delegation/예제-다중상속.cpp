#include <iostream>

using namespace std;

class Phone{	
protected:
	char szNumber[20];
public :
	Phone(){ 
		szNumber[0] = 0; 
		cout << "Phone������" << endl;
	}
	Phone(char* pszName){ 
		strcpy(szNumber, pszName); 
		cout << "Phone�Ű����� ������" << endl;

	}
	virtual ~Phone(){ cout << "Phone�Ҹ���" << endl; }

public :
	void SetNumber(char* pNo){ strcpy(szNumber, pNo);}
	char* GetNumber(){ return szNumber; }
	void Call(){ cout << GetNumber() << "�� ��ȭ�� �Ǵ�" << endl; }
	virtual void ShowInfo(){ cout << "��ȭ��ȣ : " << GetNumber() << endl; }

};

class Camera{
public :
	Camera(){ cout << "Camera ������" << endl; }
	virtual ~Camera(){ cout << "Camera�Ҹ���" << endl; }

public:
	void Shutter(){ cout << "������ ��´�" << endl; }

};

class MobilePhone :public Phone, public Camera{
public :
	MobilePhone(){ cout << "MobilePhone������#1\n"; }
	MobilePhone(char* pNumber) : Phone(pNumber){
		cout << "MobilePhone������#2\n";
	}
	virtual ~MobilePhone(){ cout << "MobilePhone�Ҹ���" << endl; }
public:
	void ShowInfo(){
		Phone::ShowInfo();//��ȭ���� ��ǰ���� ���
		cout << "200�鸸 ȭ�� ī�޶�!" << endl;//��ǰ���� ���
	}
};


int main()
{
	Phone* p1 = new Phone();
	p1->SetNumber("010-8431-0416");
	p1->GetNumber();
	p1->ShowInfo();
	p1->Call();
	//p1->Shutter();

	Phone* p2 = new MobilePhone();
	p2->SetNumber("010-8431-0416");
	p2->GetNumber();
	p2->ShowInfo();
	p2->Call();
	//p2->Shutter();  
	
	MobilePhone* m1 = new MobilePhone();
	m1->SetNumber("010-8431-0416");
	m1->GetNumber();
	m1->ShowInfo();
	m1->Call();
	m1->Shutter();

	delete p1;
	delete p2;
	delete m1;

	return 0;
}