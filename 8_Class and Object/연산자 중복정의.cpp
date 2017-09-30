#include <iostream>

using namespace std;

class Complex //복소수
{
public :
	int real;      //실수
	int imaginary; //허수
	bool imaginary_sign=true;//음수면 false, 양수면 true

public :
	Complex(int real, int imaginary)
	{
		this->real = real;
		this->imaginary = imaginary;
	}
	void print()
	{
		//-3,5/-3,-5/ -3,0/0,-5
		
		if (this->real != 0)
		{
			cout << this->real;
		}

		if (this->imaginary < 0)
		{
			imaginary_sign = false;
		}
		if (imaginary_sign == true)
		{
			cout <<"+" << this->imaginary << "i" << endl;
		}
		else
		{
			cout  << this->imaginary << "i" << endl;
		}

	}
};
int main()
{
	Complex c1(0,5);
	c1.print();

	return 0;
}