#include<iostream>
using namespace std;

class Shape{
protected:
	static int k;//static,������,�Ҹ���,friend ��ӵ��� ����. 
	int x, y;
	int width, height;
public:
	Shape()
	{
		cout << "���� �⺻������" << endl;
		x = y = width = height = 0;
	}
	Shape(int x, int y, int w, int h) : x(x), y(y), width(w), height(h)
	{
		cout << "���� �Ű����� �ִ� ������" << endl;
	}
	virtual ~Shape()
	{
		cout << "���� �Ҹ���" << endl;
	}
	virtual void Draw() //
	{
		cout << "������ �׸��ϴ�. ���� [" << x << "," << y << "," << width << "," << height << "]" << endl;
	}
};
class Rectangle : public Shape{
	//int a;
public : 
	Rectangle()
	{
		cout << "�簢�� �⺻������" << endl;
	}
	Rectangle(int x, int y, int w, int h)
		:Shape(x, y, w, h)//�⺻�����ڸ��� �ٸ������� ������ ���������
	{
		//Shape(x, y, w, h);//�⺻�����ںθ�
		cout << "�簢�� �Ű����� �ִ� ������" << endl;
	}
	~Rectangle()
	{
		cout << "�簢�� �Ҹ���" << endl;
	}

	void Draw()
	{
	//	a = 500;
	//	cout << "�簢���� �׸��ϴ�. ���� [" << x << "," << y << "," << width << "," << height << "]" << endl;
	}
};
class Ellipse : public Shape{
public:
	Ellipse()
	{
		cout << "Ÿ�� �⺻������" << endl;
	}
	Ellipse(int x, int y, int w, int h)
		: Shape(x, y, w, h)
	{
		cout << "Ÿ�� �Ű����� �ִ� ������" << endl;
	}
	~Ellipse()
	{
		cout << "Ÿ�� �Ҹ���" << endl;
	}

	void Draw()
	{
	//	cout << "Ÿ���� �׸��ϴ�. ���� [" << x << "," << y << "," << width << "," << height << "]" << endl;
	}
};
class Triangle : public Shape{
public:
	Triangle()
	{
		cout << "�ﰢ�� �⺻������" << endl;
	}
	Triangle(int x, int y, int w, int h)
		: Shape(x, y, w, h)
	{
		cout << "�ﰢ�� �Ű����� �ִ� ������" << endl;
	}
	~Triangle()
	{
		cout << "�ﰢ�� �Ҹ���" << endl;
	}

	void Draw()
	{
	//	cout << "�ﰢ���� �׸��ϴ�. ���� [" << x << "," << y << "," << width << "," << height << "]" << endl;
	}
};

int main()
{
	//Rectangle R1;
	//Ellipse E1;	
	//Triangle T1;
	//Rectangle R2(1, 2, 3, 4);
	//Ellipse E2(5, 6, 7, 8);
	//Triangle T2(9, 0, 1, 2);

	//R1.Draw();
	//E1.Draw();
	//T1.Draw();
	//R2.Draw();
	//E2.Draw();
	//T2.Draw();

	//cout<<sizeof(Shape)<<endl;//16
	//cout<<sizeof(Rectangle)<<endl;//16

	//Rectangle* pRect = 0;
	//pRect = new Rectangle(10,10, 100, 100);
	//pRect->Draw();
	//((Shape *)pRect)->Draw();
	//delete pRect;
	//cout << "-----------------------------------" << endl;

	//Shape* pShape = 0;
	//pShape = new Rectangle(10, 10, 100, 100);
	//pShape->Draw(); //�ٿ�ĳ����
	//((Rectangle*)pShape)->Draw(); //�ٿ�ĳ����
	//delete (Rectangle*)pShape; //�Ҹ��ڵ� ��ĳ�����Ͽ� �����Ҹ��ڵ� ���� �Ҹ��.

	////Rectangle* r = new Shape;
	//cout << "-----------------------------------" << endl;

	//Shape* pShape1 = 0;
	//pShape1 = new Shape(10, 10, 100, 100);
	//pShape1->Draw(); //�ٿ�ĳ����
	//((Rectangle*)pShape1)->Draw(); //����ȯ
	//delete pShape1; //�Ҹ��ڵ� ��ĳ�����Ͽ� �����Ҹ��ڵ� ���� �Ҹ��.

	//system("PAUSE");

	Shape* shapes[6];
	cout << "�����ڸ� ȣ���մϴ�." << endl;

	shapes[0] = new Rectangle();
	shapes[1] = new Rectangle(10,10,100,100);

	shapes[2] = new Ellipse();
	shapes[3] = new Ellipse(10,10,100,100);

	shapes[4] = new Triangle();
	shapes[5] = new Triangle(10,10,100,100);

	for (int i = 0; i < 6; i++)
	{
		shapes[i]->Draw();
		delete shapes[i];
	}

	cout << sizeof(Shape) << "  " << sizeof(Rectangle)<<endl;
	return 0;
}
//�θ� priavte�� �ص� �ڽİ� size�Ȱ���. ����� �˴ϴ�. �׷��� ������ ���Ѵ�. ���� �Ǿ��ִ�.
//Student * s=new Student[10];  �����͵������� �װ�
//Student * s[10];