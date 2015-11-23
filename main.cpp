#include<iostream>
#include<string.h>
#include<conio.h>
#include<cstdio>
using namespace std;

class Question
{
private:
	char* text;
public:
	void setQuestion(char buffer[50])
	{
		this->text = buffer;
	}
	void getQuestion()
	{
		cout << "Your Question is a : " << this->text << endl;
	}
};

class Test
{
private:
	Question* quest;
	char buffer[50];
public:

	Test(Question* quest) : quest(quest) {};
	Test()
	{
		cout << "Constructor : Test " << endl;
	}
	~Test()
	{
		cout << "Destructor : Test" << endl;
	}
	void addquestion(char buffer[50])
	{
		quest->setQuestion(buffer);
	}
	void getquestion()
	{
		quest->getQuestion();
	}
};
class Exam : Test
{
private:
	Question* qu;
	char buffer[50];
public:
	Exam(Question* qu) : qu(qu) {};
	Exam()
	{
		cout << "Constructor : Exam" << endl;
	}
	~Exam()
	{
		cout << "Destructor : Exam" << endl;
	}
	void addQuestionExam(char buffer[50])
	{
		qu->setQuestion(buffer);
	}
	void getQuestionExam()
	{
		qu->getQuestion();
	}
};
class LastExam : Exam
{
private:
	Question* pointer;
	char buffer[50];
public:
	LastExam(Question* pointer) : pointer(pointer) {};
	LastExam()
	{
		cout << "Constructor : Last Exam" << endl;
	}
	~LastExam()
	{
		cout << "Destructor : Last Exam" << endl;
	}
	void addQuestionLastExam(char buffer[50])
	{
		pointer->setQuestion(buffer);
	}
	void getQuestionLastExam()
	{
		pointer->getQuestion();
	}
};

	int main()
	{
		
		char buffer[50];
		Question quest;
		Test test(&quest);
		cout << "Enter Question : Test" << endl;
		gets_s(buffer);
		test.addquestion(buffer);
		cout << "--------------" << endl;
		test.getquestion();

		Question qu;
		Exam exam(&qu);
		cout << "Enter Question : Exam" << endl;
		gets_s(buffer);
		exam.addQuestionExam(buffer);
		cout << "--------------" << endl;
		exam.getQuestionExam();

		Question pointer;
		LastExam lastexam(&pointer);
		cout << "Enter Question : Last Exam" << endl;
		gets_s(buffer);
		lastexam.addQuestionLastExam(buffer);
		cout << "--------------" << endl;
		lastexam.getQuestionLastExam();
		system("pause");

	}
