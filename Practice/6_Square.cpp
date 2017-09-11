#include <iostream>

using namespace	std;

struct Square
{
	int x, y,w,h;
	void SetCoordinate(int x, int y, int w, int h);
	void PrintCoordinate();

}square;
void Square::SetCoordinate(int x, int y, int w, int h)
{
	this->x = x;
	this->y = y;
	this->w = w;
	this->h = h;
}
void Square::PrintCoordinate()
{
	cout << "좌표값 : ";
	cout << "(" << x <<" , "<< y <<")" << endl;
	cout << "가로 : " << w << " , " << "세로 : " << h<<endl;
}

int main()
{
	int x, y;
	int w, h;
	cout << "직사각형의 x좌표와 y좌표 값을 입력 : ";
	cin >> x;
	cin >> y;

	cout << "직사각형 너비와 높이 값을 입력 : ";
	cin >> w;
	cin >> h;
	square.SetCoordinate(x, y,w,h);
	square.PrintCoordinate();
	
	return 0;
}