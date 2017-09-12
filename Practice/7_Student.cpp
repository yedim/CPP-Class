#include <iostream>
#include <ctime>
#define ST_CNT 10
#define SUB_CNT 3

using namespace std;

void PrintHighScore(char sub[][6], int maxidx[]);

struct Student
{
	int num;
	char* name;
	int kor;
	int eng;
	int math;

}student[ST_CNT];

int main()
{
	srand((unsigned)time(NULL));

	char sub[][6] = { "국어", "영어", "수학" };
	bool flag = false;

	//난수로 학생 정보 생성. 중복체크
	for (int i = 0; i < ST_CNT; i++)
	{
		student[i].num = rand() % 20 + 2501;//2501~2520

		for (int j = 0; j < i; j++)
		{
			if (student[i].num == student[j].num)
			{
				i--;
				flag = true;
			}
		}

		if (flag == false)
		{
			cout << "학생 " << student[i].num << "번의 이름 입력 : ";
			student[i].name = new char[20];
			cin >> student[i].name;
			student[i].kor = rand() % 101;
			student[i].eng = rand() % 101;
			student[i].math = rand() % 101;
			printf("%4s :%d, %4s :%d, %4s :%d\n", sub[0], student[i].kor, sub[1], student[i].eng, sub[2], student[i].math);
		}
		else
		{
			flag = false;
		}
	}

	int sub_max[SUB_CNT] = { 0, };
	int sub_maxidx[SUB_CNT] = { 0, };

	for (int i = 0; i < ST_CNT; i++)
	{
		if (student[i].kor > sub_max[0])
		{
			sub_max[0] = student[i].kor;
			sub_maxidx[0] = i;
		}
		if (student[i].eng > sub_max[1])
		{
			sub_max[1] = student[i].eng;
			sub_maxidx[1] = i;
		}
		if (student[i].math >sub_max[2])
		{
			sub_max[2] = student[i].math;
			sub_maxidx[2] = i;
		}
	}
	PrintHighScore(sub, sub_maxidx);

	return 0;
}

void PrintHighScore(char sub[][6],int maxidx[])
{
	printf("%34s%10s%6s%6s%6s\n", "학번", "이름", "국어", "영어", "수학");
	for (int i = 0; i < SUB_CNT; i++)
	{
		printf("%6s점수 가장 높은 사람 : %6d%10s%6d%6d%6d\n", sub[i],student[maxidx[i]].num, student[maxidx[i]].name, student[maxidx[i]].kor, student[maxidx[i]].eng, student[maxidx[i]].math);
	}
}