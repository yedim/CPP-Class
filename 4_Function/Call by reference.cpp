#include<iostream>

using namespace std;

void test1(int*);

int main()
{
	int x = 10;
	cout << "Before test1 : " << x << endl;

	test1(&x);
	cout << "After test1 : " << x << endl;
	return 0;
}
void test1(int* x)
{
	*x++;//++ÀÌ¸ÕÀú
	cout << "In test1 : " << *x << endl;

}