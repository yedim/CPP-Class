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
	cout << "��ǥ�� : ";
	cout << "(" << x <<" , "<< y <<")" << endl;
	cout << "���� : " << w << " , " << "���� : " << h<<endl;
}

int main()
{
	int x, y;
	int w, h;
	cout << "���簢���� x��ǥ�� y��ǥ ���� �Է� : ";
	cin >> x;
	cin >> y;

	cout << "���簢�� �ʺ�� ���� ���� �Է� : ";
	cin >> w;
	cin >> h;
	square.SetCoordinate(x, y,w,h);
	square.PrintCoordinate();
	
	return 0;
}