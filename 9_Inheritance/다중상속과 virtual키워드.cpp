#include <iostream>
using namespace std;

class Horse
{
public :
	Horse() { cout << "말(Horse) 생성자" << endl; }
	virtual ~Horse(){ cout << "말(Horse) 소멸자" << endl; }
	virtual void Speak(){ cout << "말(Horse)이 웁니다.히히힝~" << endl; }
};

class Bird
{
public :
	Bird(){ cout << "새(Bird) 생성자" << endl; }
	virtual ~Bird(){ cout << "새(Bird) 소멸자" << endl; }
	virtual void Speak(){ cout << "새(Bird)가 웁니다. 짹짹짹~" << endl; }
	virtual void Fly(){ cout << "하늘을 날 수 있습니다." << endl; }
};

class Pegasus :  public Horse//순서
{
	Bird bird;//위임->생성
public :
	Pegasus() { cout << "페가수스 생성자" << endl; }
	~Pegasus(){ cout << "페가수스 소멸자" << endl; }
	void Speak(){ cout << "페가수스가 웁니다.히히힝~" << endl; }
	void Fly(){ bird.Fly(); }
};

int main()
{
	Pegasus* p = new Pegasus();
	p->Speak(); //다중상속했을 때의 문제점-> Horse와 Bird 둘 다 Speak()함수->모호->Overriding을 꼭 해야 된당!
	//p->Horse::Speak();//Horse의 Speak
	//p->Bird::Speak();//Bird의 Speak

	p->Fly();
	delete p;
	cout << "----------------------------------------" << endl;//속성이 같은게 많은 것 상속. has a 날개(위임). is a(상속)
	Horse* h = new Pegasus();
	h->Speak();
	((Pegasus *)h)->Fly();
	delete h;
}