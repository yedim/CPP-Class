#include<iostream> 
#include<time.h>

using namespace std;

int main(){
	srand((unsigned)time(0));

	for (int i = 0; i < 10; i++){
		cout << i << ": ������ :" << rand() << endl;
	}
}