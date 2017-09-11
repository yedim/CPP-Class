#include<iostream>
#define st_cnt 5

using namespace std;

int main(){
	int score[st_cnt][5];//�ο��� ����
	double avg[st_cnt];
	char major[st_cnt];

	char st_number[st_cnt][5];//�й�
	char st_name[st_cnt][10];//�̸�
	int grade[st_cnt];

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

		switch ((int)avg[i] / 10){//���
		case 10:
		case 9: major[i] = 'A'; break;
		case 8: major[i] = 'B'; break;
		case 7: major[i] = 'C'; break;
		case 6: major[i] = 'D'; break;
		default: major[i] = 'F';
		}
	}

	//���� �ű��
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
	printf(" �й�    �̸�    ����   ����   ����   ����    ����    ���    ���    ����\n");

	for (int i = 0; i < st_cnt; i++)
	{
		printf("%5s", st_number[i]);
		printf("%9s", st_name[i]);
		for (int j = 0; j < 5; j++)
		{
			printf("%7d", score[i][j]);
		}
		printf("%10.2f", avg[i]); //100.00�� ���� �Ҽ��� ��°�ڸ��� ǥ��
		printf("%6c", major[i]);
		printf("%5d\n", grade[i]);

	}


	return 0;
}