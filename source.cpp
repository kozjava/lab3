#include<iostream>
#include"test.h"
#include"exam.h"
#include"question.h"
#include"final_exam.h"

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "russian");
	Test a;
	a.set(" Вопросы к Тесту");
	a.get();
	cout << endl;
	Exam b;
	b.set(" Вопросы к Экзамену");
	b.get();
	cout << endl;
	Question qq;
	qq.set(" Массив Вопросов");
	qq.get();
	cout << endl;
	FinalExam zz;
	zz.set(" Вопросы к выпускному экзамену");
	zz.get();
	cout << endl;
	system("pause");
	return 0;
}
