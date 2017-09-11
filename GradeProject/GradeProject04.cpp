#include<iostream>

using namespace std;


struct Student
{
	char st_number[5];//�������迭
	char st_name[10];//
	int *score;//�������� ������ �������� �Ҵ��ؾ� �մϴ�.
	double avg;
	char major;
	int grade;
};

int main(){

	int st_cnt;
	cout << "����� �Է��Ͻðڽ��ϱ�?";
	cin >> st_cnt;

	int subject;
	cout << "������� �Է��ϼ��� : ";
	cin >> subject;

	char sub[9][6] = { "����", "����", "����", "C++", "JAVA", "����", "OS ", "SB ", "DS " };

	Student* stu = new Student[st_cnt];

	for (int i = 0; i < st_cnt; i++){

		stu[i].score = new int[subject + 1];

		cout << "�л� �й��� �Է����ּ��� : ";
		cin >> stu[i].st_number;

		cout << "�л� �̸��� �Է����ּ��� : ";
		cin >> stu[i].st_name;

		stu[i].score[subject] = 0;//�ʱ�ȭ

		for (int j = 0; j < subject; j++)
		{
			do{
				cout << "�л� " << i + 1 << "�� " << sub[j] << "������ �Է����ּ��� : ";
				cin >> stu[i].score[j];

				if (stu[i].score[j]<0 || stu[i].score[j]>100)
					cout << "�߸� �Է��ϼ̽��ϴ�" << endl;
			} while (stu[i].score[j]<0 || stu[i].score[j]>100);

			stu[i].score[subject] += stu[i].score[j];
		}
		stu[i].avg = (double)stu[i].score[subject] / subject;

		switch ((int)stu[i].avg / 10){
		case 10:
		case 9: stu[i].major = 'A'; break;
		case 8: stu[i].major = 'B'; break;
		case 7: stu[i].major = 'C'; break;
		case 6: stu[i].major = 'D'; break;
		default: stu[i].major = 'F';
		}
	}

	for (int i = 0; i < st_cnt; i++)
	{
		stu[i].grade = 1;
	}
	for (int i = 0; i < st_cnt - 1; i++){//0,1,2,
		for (int j = i + 1; j < st_cnt; j++){//1,2,3
			if (stu[i].avg < stu[j].avg){
				stu[i].grade++;
			}
			else if (stu[i].avg >stu[j].avg){
				stu[j].grade++;
			}
		}
	}

	printf(" �й�    �̸�  ");
	for (int title = 0; title < subject; title++)
	{
		printf("%7s", sub[title]);
	}
	printf("   ����     ���     ���      ����\n");

	for (int i = 0; i < st_cnt; i++)
	{
		printf("%5s", stu[i].st_number);
		printf("%9s", stu[i].st_name);
		for (int j = 0; j < subject + 1; j++)
		{
			printf("%7d", stu[i].score[j]);
		}
		printf("%10.2f", stu[i].avg); //100.00
		printf("%8c", stu[i].major);
		printf("%10d\n", stu[i].grade);
	}

	for (int i = 0; i < st_cnt; i++)
	{
		delete[] stu[i].score;
	}
	delete[] stu;

	return 0;
}