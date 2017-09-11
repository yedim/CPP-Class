#include <iostream>

using namespace std;

int main(){ //datatype test
	int in = 210000000;
	short sh = 20;
	char ch = 'a';
	long lo = 30;
	float fl = 3.4f;
	double dou = 5.6;
	sh = ch;
	in = sh;
	lo = in;
	fl = (float)lo; ///
	dou = fl;
	fl = (float)dou; ///
	lo = (long)fl; ///
	in = lo;
	sh = in;
	ch = (char)sh; ///

	return 0;
}