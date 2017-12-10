#include <iostream>
using namespace std;

class Horse
{
public :
	Horse() { cout << "��(Horse) ������" << endl; }
	virtual ~Horse(){ cout << "��(Horse) �Ҹ���" << endl; }
	virtual void Speak(){ cout << "��(Horse)�� ��ϴ�.������~" << endl; }
};

class Bird
{
public :
	Bird(){ cout << "��(Bird) ������" << endl; }
	virtual ~Bird(){ cout << "��(Bird) �Ҹ���" << endl; }
	virtual void Speak(){ cout << "��(Bird)�� ��ϴ�. ±±±~" << endl; }
	virtual void Fly(){ cout << "�ϴ��� �� �� �ֽ��ϴ�." << endl; }
};

class Pegasus :  public Horse//����
{
	Bird bird;//����->����
public :
	Pegasus() { cout << "�䰡���� ������" << endl; }
	~Pegasus(){ cout << "�䰡���� �Ҹ���" << endl; }
	void Speak(){ cout << "�䰡������ ��ϴ�.������~" << endl; }
	void Fly(){ bird.Fly(); }
};

int main()
{
	Pegasus* p = new Pegasus();
	p->Speak(); //���߻������ ���� ������-> Horse�� Bird �� �� Speak()�Լ�->��ȣ->Overriding�� �� �ؾ� �ȴ�!
	//p->Horse::Speak();//Horse�� Speak
	//p->Bird::Speak();//Bird�� Speak

	p->Fly();
	delete p;
	cout << "----------------------------------------" << endl;//�Ӽ��� ������ ���� �� ���. has a ����(����). is a(���)
	Horse* h = new Pegasus();
	h->Speak();
	((Pegasus *)h)->Fly();
	delete h;
}