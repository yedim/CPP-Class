#include <iostream>
#include <ctime>
#define ST_CNT 10

using namespace std;

void PrintHighScore(int idx);

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

	int kor_max = 0, eng_max = 0, math_max = 0;
	int kor_maxidx = 0, eng_maxidx = 0, math_maxidx = 0;

	for (int i = 0; i < ST_CNT; i++)
	{
		if (student[i].kor > kor_max)
		{
			kor_max = student[i].kor;
			kor_maxidx = i;
		}
		if (student[i].eng > eng_max)
		{
			eng_max = student[i].eng;
			eng_maxidx = i;
		}
		if (student[i].math > math_max)
		{
			math_max = student[i].math;
			math_maxidx = i;
		}
	}

	cout << sub[0] << "점수 가장 높은 학생 : ";
	PrintHighScore(kor_maxidx);

	cout << sub[1] << "점수 가장 높은 학생 : ";
	PrintHighScore(eng_maxidx);

	cout << sub[2] << "점수 가장 높은 학생 : ";
	PrintHighScore(math_maxidx);

	return 0;
}

void PrintHighScore(int idx)
{
	printf("%6d%6s%6d%6d%6d\n", student[idx].num, student[idx].name, student[idx].kor, student[idx].eng, student[idx].math);
}