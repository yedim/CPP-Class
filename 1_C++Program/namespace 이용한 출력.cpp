#include <iostream>

using namespace std;

namespace ban5{
	int a = 10;
	void print(){ cout << "ban5" << endl; }
}
namespace ban6{
	int a = 20;
	void print(){ cout << "ban6" << endl; }
}
int main(){ // namespace test
	// cout << a << endl; //메인 안에 있는 a만인식
	// cout << "안녕하세요?\n";

	cout << ban5::a << endl;
	ban5::print();
	return 0;
}