#include<iostream>

using namespace std;

char sub[9][6] = { "국어", "영어", "수학", "C++", "JAVA", "과학", "OS ", "SB ", "DS " }; //전역변수로
int subject;
int i;
class Student
{
	char st_number[5];//일차원배열
	char st_name[10];//
	int *score;//고정되지 않으면 동적으로 할당해야 합니다.
	double avg;
	char major;
	int grade;

public:
	void input();
	void print();
	void process();

	Student();
	~Student();

	friend	void ranking(int st_cnt);
	friend ostream& operator<<(ostream& ost, Student& st);

};

Student* stu = 0;//배열을 매개변수로 넘기는 것은 좋지 않다. 전역으로 해야 됨.
Student::Student()
{
	cout << "생성자";
	this->score = new int[subject + 1];
	this->score[subject] = 0;//초기화
	this->grade = 1;

}
Student::~Student()
{
	delete[] this->score;
	cout << this->st_number << "소멸자";
}
void Student::input()
{
	cout << "학생 학번을 입력해주세요 : ";
	cin >> this->st_number;

	cout << "학생 이름을 입력해주세요 : ";
	cin >> this->st_name;

	for (int j = 0; j < subject; j++){
		do{
			cout << "학생 " << i + 1 << "의 " << sub[j] << "점수를 입력해주세요 : ";
			cin >> this->score[j];

			if (this->score[j]<0 || this->score[j]>100)
				cout << "잘못 입력하셨습니다" << endl;
		} while (this->score[j]<0 || this->score[j]>100);

		this->score[subject] += this->score[j];
	}
	this->avg = (double)this->score[subject] / subject;
}
void Student::print()
{
	printf("%5s", this->st_number);
	printf("%9s", this->st_name);
	for (int j = 0; j < subject + 1; j++)
	{
		printf("%7d", this->score[j]);
	}
	printf("%10.2f", this->avg); //100.00
	printf("%8c", this->major);
	printf("%10d\n", this->grade);
}
void Student::process()
{
	switch ((int)this->avg / 10){
	case 10:
	case 9: this->major = 'A'; break;
	case 8: this->major = 'B'; break;
	case 7: this->major = 'C'; break;
	case 6: this->major = 'D'; break;
	default: this->major = 'F';
	}
}
void ranking(int st_cnt)
{
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
}

ostream& operator<<(ostream& ost, Student& st)
{
	//printf("%5s", st.st_number);
	//printf("%9s", st.st_name);
	//for (int j = 0; j < subject + 1; j++)
	//{
	//	printf("%7d",st.score[j]);
	//}
	//printf("%10.2f", st.avg); //100.00
	//printf("%8c", st.major);
	//printf("%10d\n", st.grade);
	st.print();
	return ost;
}

int main(){

	
	int menu;
	int st_cnt;

	do{
		system("cls");
		cout << "1.입력  2.출력  3.종료" << endl;
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << "몇명을 입력하시겠습니까?";
			cin >> st_cnt;
			cout << "과목수를 입력하세요 : ";
			cin >> subject;

			stu = new Student[st_cnt];

			for (i = 0; i < st_cnt; i++){
				stu[i].input();
				stu[i].process();
			}
			ranking(st_cnt);

			break;
		case 2:
			printf(" 학번    이름  ");
			for (int title = 0; title < subject; title++){
				printf("%7s", sub[title]);
			}
			printf("   총점     평균     등급      석차\n");
			for (int i = 0; i < st_cnt; i++){
				cout << (stu[i]); //operator<<(cout.stu[i]);
			}
			delete[] stu;			
			break;
		case 3:
			return 0;
			break;
		default:
			cout << "숫자를 잘못입력하셨습니다.";
			break;
		}
	} while (menu!=3);
		
	return 0;
}