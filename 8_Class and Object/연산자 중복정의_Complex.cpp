#include <iostream>

using namespace std;

class Complex //복소수
{
public :
	int real;      //실수
	int imaginary; //허수

public :
	Complex(int real, int imaginary)
	{
		this->real = real;
		this->imaginary = imaginary;
	}
	void print()
	{
		//-3,5/-3,-5/-3,0/0,-5/0,0
		
		if (real != 0 && imaginary != 0){
			if (imaginary > 0)
				cout << real << " + " << imaginary << "i " << endl;
			else
				cout << real << " - " << -imaginary << "i " << endl;
		}
		else if (real == 0){//real만 0이면
			cout << imaginary << "i" << endl;
		}
		else if (imaginary == 0){//imaginery만 0이면
			cout << real << endl;
		}
		else{ //둘 다 0
			cout << 0 << endl;
		}

	}
};
int main()
{
	Complex c1(-1,-5);
	c1.print();

	return 0;
}