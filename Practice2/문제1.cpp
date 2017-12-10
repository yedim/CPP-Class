#include <iostream>
#include <ctime>

using namespace std;

class Point{
private :
	int x, y;
public :
	Point(){}
	Point(int x, int y){
		this->x = x;
		this->y = y;
	}
	void setX(int x){ this->x = x; }
	int getX(){ return x; }
	void setY(int y){ this->y = y; }
	int getY(){ return y; }
};

class Line{
public:
	Point p1;
	Point p2;
	char* name;
	Line(Point p1, Point p2, char* name){
		this->p1.setX(p1.getX());
		this->p1.setY(p1.getY());
		this->p2.setX(p2.getX());
		this->p2.setY(p2.getY());
		this->name = new char[strlen(name)+1];
		strcpy(this->name, name);
	}
	void Draw(){
		cout << "점<" << p1.getX() << "," << p1.getY() << ">와 점<" << p2.getX() << "," << p2.getY() << ">를 잇는 선 " << name << "의 길이 : " << sqrt(pow(abs(p1.getX() - p2.getX()), 2) + pow(abs(p1.getY() - p2.getY()), 2)) << endl;
	}
};

int main(){

	srand((unsigned int)time(NULL));
	int r[4];
	for (int i = 0; i < 4; i++){
		r[i] = rand() % 61 - 31;
	}
	char name[20];
	cout << "선의 이름을 입력하세요:";
	cin >> name;
	Point p1(23, 28);
	Point p2(-29, -15);
	Line line(p1, p2,name);
	line.Draw();
	return 0;
}