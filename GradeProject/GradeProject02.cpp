#include<iostream>

using namespace std;

int main(){

	int st_cnt;
	cout << "����� �Է��Ͻðڽ��ϱ�?";
	cin >> st_cnt;//����. ���.

	int **score = new int*[st_cnt];
	for (int i = 0; i < st_cnt; i++)
	{
		score[i] = new int[5];
	}
	double* avg = new double[st_cnt];
	char* major = new char[st_cnt];

	char **st_number = new char*[st_cnt];
	for (int i = 0; i < st_cnt; i++)
	{
		st_number[i] = new char[5];
	}

	char** st_name = new char*[st_cnt];
	for (int i = 0; i < st_cnt; i++)
	{
		st_name[i] = new char[10];
	}
	int* grade = new int[st_cnt];

	char sub[][5] = { "����", "����", "����", "����" };

	for (int i = 0; i < st_cnt; i++){

		cout << "�л� �й��� �Է����ּ��� : ";
		cin >> st_number[i];

		cout << "�л� �̸��� �Է����ּ��� : ";
		cin >> st_name[i];

		score[i][4] = 0;

		for (int j = 0; j < 4; j++)
		{
			do{
				cout << "�л� " << i + 1 << "�� " << sub[j] << "������ �Է����ּ��� : ";
				cin >> score[i][j];

				if (score[i][j]<0 || score[i][j]>100)
					cout << "�߸� �Է��ϼ̽��ϴ�" << endl;
			} while (score[i][j]<0 || score[i][j]>100);

			score[i][4] += score[i][j];//��
		}
		avg[i] = score[i][4] / 4;//���

		switch ((int)avg[i] / 10){
		case 10:
		case 9: major[i] = 'A'; break;
		case 8: major[i] = 'B'; break;
		case 7: major[i] = 'C'; break;
		case 6: major[i] = 'D'; break;
		default: major[i] = 'F';
		}
	}

	for (int i = 0; i < st_cnt; i++)
	{
		grade[i] = 1;
	}
	for (int i = 0; i < st_cnt - 1; i++){//0,1,2,
		for (int j = i + 1; j < st_cnt; j++){//1,2,3
			if (avg[i] < avg[j]){
				grade[i]++;
			}
			else if (avg[i]>avg[j]){
				grade[j]++;
			}
		}
	}
	printf(" �й�    �̸�    ����   ����   ����   ����   ����     ���     ���     ����\n");

	for (int i = 0; i < st_cnt; i++)
	{
		printf("%5s", st_number[i]);
		printf("%9s", st_name[i]);
		for (int j = 0; j < 5; j++)
		{
			printf("%7d", score[i][j]);
		}
		printf("%9.2f", avg[i]);
		printf("%8c", major[i]);
		printf("%10d\n", grade[i]);
	}

	for (int i = 0; i < st_cnt; i++)
	{
		delete[] score[i];
		delete[] st_number[i];
		delete[] st_name[i];
	}

	delete[] score;
	delete[] avg;
	delete[] major;
	delete[] st_number;
	delete[] st_name;
	delete[] grade;

	return 0;
}