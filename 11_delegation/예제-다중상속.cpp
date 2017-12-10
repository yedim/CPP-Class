#include <iostream>

using namespace std;

class Phone{	
protected:
	char szNumber[20];
public :
	Phone(){ 
		szNumber[0] = 0; 
		cout << "Phone생성자" << endl;
	}
	Phone(char* pszName){ 
		strcpy(szNumber, pszName); 
		cout << "Phone매개변수 생성자" << endl;

	}
	virtual ~Phone(){ cout << "Phone소멸자" << endl; }

public :
	void SetNumber(char* pNo){ strcpy(szNumber, pNo);}
	char* GetNumber(){ return szNumber; }
	void Call(){ cout << GetNumber() << "로 전화를 건다" << endl; }
	virtual void ShowInfo(){ cout << "전화번호 : " << GetNumber() << endl; }

};

class Camera{
public :
	Camera(){ cout << "Camera 생성자" << endl; }
	virtual ~Camera(){ cout << "Camera소멸자" << endl; }

public:
	void Shutter(){ cout << "사진을 찍는다" << endl; }

};

class MobilePhone :public Phone, public Camera{
public :
	MobilePhone(){ cout << "MobilePhone생성자#1\n"; }
	MobilePhone(char* pNumber) : Phone(pNumber){
		cout << "MobilePhone생성자#2\n";
	}
	virtual ~MobilePhone(){ cout << "MobilePhone소멸자" << endl; }
public:
	void ShowInfo(){
		Phone::ShowInfo();//전화기의 제품정보 출력
		cout << "200백만 화소 카메라!" << endl;//제품정보 출력
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