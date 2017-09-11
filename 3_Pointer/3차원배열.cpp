#include<iostream>
using namespace std;

int main(){
	int a[2][4][3] = {
		{ { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }, { 10, 11, 12 } },
		{ { 13, 14, 15 }, { 16, 17, 18 }, { 19, 20, 21 }, { 22, 23, 24 } }
	};

	int *p = a[0][0];

	int size1 = sizeof(a) / sizeof(a[0]);
	int size2 = sizeof(a[0]) / sizeof(a[0][0]);
	int size3 = sizeof(a[0][0]) / sizeof(int); //int»§¿∫ a[0][0][0]

	for (int i = 0; i < size1; i++){
		for (int j = 0; j < size2; j++){
			for (int k = 0; k < size3; k++)
				cout << a[i][j][k] << "  ";
		}
	}

	cout << endl;
	for (int i = 0; i < size1; i++){
		for (int j = 0; j < size2; j++){
			for (int k = 0; k < size3; k++)
				cout << *(p + (i * 4 * 3 + j * 3 + k)) << "  ";
		}
	}

	return 0;
}