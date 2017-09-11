#include<iostream>
#define st_cnt 5

using namespace std;

int main(){
	int score[st_cnt][5];//인원수 과목
	double avg[st_cnt];
	char major[st_cnt];

	char st_number[st_cnt][5];//학번
	char st_name[st_cnt][10];//이름
	int grade[st_cnt];

	char sub[][5] = { "국어", "영어", "수학", "전산" };
	for (int i = 0; i < st_cnt; i++){

		cout << "학생 학번을 입력해주세요 : ";
		cin >> st_number[i];

		cout << "학생 이름을 입력해주세요 : ";
		cin >> st_name[i];

		score[i][4] = 0;

		for (int j = 0; j < 4; j++)
		{
			do{
				cout << "학생 " << i + 1 << "의 " << sub[j] << "점수를 입력해주세요 : ";
				cin >> score[i][j];

				if (score[i][j]<0 || score[i][j]>100)
					cout << "잘못 입력하셨습니다" << endl;
			} while (score[i][j]<0 || score[i][j]>100);

			score[i][4] += score[i][j];//합
		}
		avg[i] = score[i][4] / 4;//평균

		switch ((int)avg[i] / 10){//등급
		case 10:
		case 9: major[i] = 'A'; break;
		case 8: major[i] = 'B'; break;
		case 7: major[i] = 'C'; break;
		case 6: major[i] = 'D'; break;
		default: major[i] = 'F';
		}
	}

	//석차 매기기
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
	printf(" 학번    이름    국어   영어   수학   전산    총점    평균    등급    석차\n");

	for (int i = 0; i < st_cnt; i++)
	{
		printf("%5s", st_number[i]);
		printf("%9s", st_name[i]);
		for (int j = 0; j < 5; j++)
		{
			printf("%7d", score[i][j]);
		}
		printf("%10.2f", avg[i]); //100.00과 같이 소수점 둘째자리로 표기
		printf("%6c", major[i]);
		printf("%5d\n", grade[i]);

	}


	return 0;
}