/*

20171011 숙제
- 출력문 1i 나오는거 수정 띄어쓰기 (절댓값사용)
- 곱셈, 나눗셈 연산자 재정의 해오기

*/
#include <iostream>
using namespace std;

class Complex{ //복소수
public:
	int real;
	int imaginary;

	Complex(){
		real = 0;
		imaginary = 0;
	}

	Complex(int a, int b){
		this->real = a;
		this->imaginary = b;
	}

	void print(){
		if (real){
			cout << real;
		}
		if (imaginary > 0 && real != 0) cout << "+";
		if (imaginary){
			cout << imaginary << "i";
		}
		if (real == 0 && imaginary == 0) cout << "0";
		cout << endl;

		
		/*
		if(real == 0 && imaginary == 0) cout << "0";
		else {

		}
		*/
	}

	Complex& operator+(Complex& com){
		int tmpr, tmpi;

		tmpr = this->real + com.real;
		tmpi = this->imaginary + com.imaginary;

		return Complex(tmpr, tmpi);
	}

	Complex& operator-(Complex& com){
		int tmpr, tmpi;

		tmpr = this->real - com.real;
		tmpi = this->imaginary - com.imaginary;

		return Complex(tmpr, tmpi);
	}

	Complex& operator*(Complex& com){
		int tmpr, tmpi;

		tmpr = this->real * com.real;
		tmpi = this->imaginary * com.imaginary;

		cout << tmpr << " " << tmpi << endl;

		if (tmpi)
		{
			tmpr += (-1)*tmpi;
			tmpi = 0;
		}
		tmpi = this->real*com.imaginary + this->imaginary*com.real;

		cout << tmpr << " " << tmpi << endl;
		return Complex(tmpr, tmpi);
	}

	Complex& operator/(Complex& com){
		int tmpr, tmpi;
		int top_tmpr, top_tmpi;
		int bottom_tmpr, botton_tmpi;
	
		//tmpr = this->real / com.real;
		//tmpi = this->imaginary / com.imaginary;

		//분자
		top_tmpr = this->real * com.real;
		top_tmpi = this->imaginary *(-1)* com.imaginary;

		cout << top_tmpr << " " << top_tmpi << endl;

		if (top_tmpi)
		{
			top_tmpr += (-1)*top_tmpi;
			top_tmpi = 0;
		}
		top_tmpi = this->real*(-1)*com.imaginary + (-1)*this->imaginary*com.real;

		//분모
		bottom_tmpr = this->real * com.real;
		botton_tmpi = this->imaginary*(-1) * com.imaginary;

		cout << bottom_tmpr << " " << tmpi << endl;

		if (botton_tmpi)
		{
			bottom_tmpr += (-1)*tmpi;
			botton_tmpi = 0;
		}
		botton_tmpi = this->real*(-1)*com.imaginary + this->imaginary*com.real;

		cout << bottom_tmpr << " " << botton_tmpi << endl;

		
		return Complex(tmpr, tmpi);
	}

	Complex& operator++(){
		this->real++;
		cout << "전치 연산 "<<endl;
		return *this;
	}
	
	Complex operator++(int){
		/*int real;
		real = this->real;
		this->real++;
		cout << "후치 연산"<<endl;
		return Complex(real,this->imaginary);*/

		Complex prev(this->real, this->imaginary);
		this->real++;
		return prev;
	}

	Complex& operator=(Complex& com){
		this->real = com.real;
		this->imaginary = com.imaginary;
		return *this;
	}

	//friend void operator>>(istream& ist, Complex& com); //친구클래스
	friend Complex& operator+(Complex& com1, Complex& com2);

};

Complex& operator+(Complex& com1,Complex& com2){
	int tmpr, tmpi;

	tmpr = com1.real + com2.real;
	tmpi = com1.imaginary + com2.imaginary;

	return Complex(tmpr, tmpi);
}

ostream& operator<<(ostream& ost, Complex& com){  //리턴타입은 ostream&
	com.print();
	return ost;
}

istream& operator>>(istream& ist, Complex& com){
	cout << "복소수 입력" << endl;
	cout << "실수 : "; cin >> com.real;
	cout << "허수 : "; cin >> com.imaginary;
	return ist;
}

int main(){
	Complex c1(3, 5);
	Complex c2(3, -5);
	Complex c3(-2, 4);
	Complex c4(-2, -4);
	Complex c5(3, 0);
	Complex c6(0, -4);
	Complex c7(0, 0);
	Complex c8(0, 4);

	cout << c1;
	cout << c2;
	cout << c3;
	cout << c4;
	cout << c5;
	cout << c6;
	cout << c7;
	cout << c8;

	cout << "---------------------------------" << endl;
	Complex c9;
	c9.operator= (operator+(c1, c2)); //일반함수화
	// c9.operator=(c1.operator+(c2));
	cout << c1;
	cout << c2;
	//c9.print();
	cout << c9;

	cout << "---------------------------------" << endl;
	cout << c3;
	cout << c5;
	c5 = c3;
	cout << c5;

	cout << "---------------------------------" << endl;
	Complex c10;
	c10 = c2 - c4;
	cout << c10;

	cout << "---------------------------------" << endl;
	Complex c11;
	cin >> c11;
	cout << c11 << c10;

	cout << "---------------------------------" << endl;
	Complex c12;
	c12 = c1*c2;
	cout << c12;

	cout << "---------------------------------" << endl;
	//나눗셈

	cout << "---------------------------------" << endl;
	Complex a,b;
	b = ++c1; //4,5 c1(4,5)
	a = c1++;//4,5 c1(5,5)
	cout << b;
	cout << c1;
	cout << a;
	cout << c1;

	return 0;
}