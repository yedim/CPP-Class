#include<iostream>
using namespace std;

class Shape{
protected:
	static int k;//static,생성자,소멸자,friend 상속되지 않음. 
	int x, y;
	int width, height;
public:
	Shape()
	{
		cout << "도형 기본생성자" << endl;
		x = y = width = height = 0;
	}
	Shape(int x, int y, int w, int h) : x(x), y(y), width(w), height(h)
	{
		cout << "도형 매개변수 있는 생성자" << endl;
	}
	virtual ~Shape()
	{
		cout << "도형 소멸자" << endl;
	}
	virtual void Draw() //
	{
		cout << "도형을 그립니다. 영역 [" << x << "," << y << "," << width << "," << height << "]" << endl;
	}
};
class Rectangle : public Shape{
	//int a;
public : 
	Rectangle()
	{
		cout << "사각형 기본생성자" << endl;
	}
	Rectangle(int x, int y, int w, int h)
		:Shape(x, y, w, h)//기본생성자말고 다른생성자 가려면 명시적으로
	{
		//Shape(x, y, w, h);//기본생성자부름
		cout << "사각형 매개변수 있는 생성자" << endl;
	}
	~Rectangle()
	{
		cout << "사각형 소멸자" << endl;
	}

	void Draw()
	{
	//	a = 500;
	//	cout << "사각형을 그립니다. 영역 [" << x << "," << y << "," << width << "," << height << "]" << endl;
	}
};
class Ellipse : public Shape{
public:
	Ellipse()
	{
		cout << "타원 기본생성자" << endl;
	}
	Ellipse(int x, int y, int w, int h)
		: Shape(x, y, w, h)
	{
		cout << "타원 매개변수 있는 생성자" << endl;
	}
	~Ellipse()
	{
		cout << "타원 소멸자" << endl;
	}

	void Draw()
	{
	//	cout << "타원을 그립니다. 영역 [" << x << "," << y << "," << width << "," << height << "]" << endl;
	}
};
class Triangle : public Shape{
public:
	Triangle()
	{
		cout << "삼각형 기본생성자" << endl;
	}
	Triangle(int x, int y, int w, int h)
		: Shape(x, y, w, h)
	{
		cout << "삼각형 매개변수 있는 생성자" << endl;
	}
	~Triangle()
	{
		cout << "삼각형 소멸자" << endl;
	}

	void Draw()
	{
	//	cout << "삼각형을 그립니다. 영역 [" << x << "," << y << "," << width << "," << height << "]" << endl;
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
	//pShape->Draw(); //다운캐스팅
	//((Rectangle*)pShape)->Draw(); //다운캐스팅
	//delete (Rectangle*)pShape; //소멸자도 업캐스팅하여 도형소멸자도 같이 소멸됨.

	////Rectangle* r = new Shape;
	//cout << "-----------------------------------" << endl;

	//Shape* pShape1 = 0;
	//pShape1 = new Shape(10, 10, 100, 100);
	//pShape1->Draw(); //다운캐스팅
	//((Rectangle*)pShape1)->Draw(); //형변환
	//delete pShape1; //소멸자도 업캐스팅하여 도형소멸자도 같이 소멸됨.

	//system("PAUSE");

	Shape* shapes[6];
	cout << "생성자를 호출합니다." << endl;

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
//부모를 priavte로 해도 자식과 size똑같다. 상속은 됩니다. 그러나 쓰지는 못한다. 내제 되어있다.
//Student * s=new Student[10];  포인터따라갔을때 그거
//Student * s[10];