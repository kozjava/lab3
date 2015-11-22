#include<iostream>
#include<string.h>
#include<conio.h>
#include<cstdio>
using namespace std;

class Test
{
private : 
	char question[25];
public:
	Test()
	{
		cout << "Constructor : Test " << endl;
	}
	~Test()
	{
		cout << "Destructor" << endl;
	}
	void print(char buffer[50]) const
	{
		for (int i = 0; i <1; i++)
		{
			cout << "Question(Test) : "; puts(buffer);
			cout << endl;
		}
	}
	void set(char buffer[25])
	{
		for (int i = 0; i <1; i++)
		{
			question[i] = buffer[i];
		}
	}
};
class Exam : Test
{
private: char QQ[25];
public:
	Exam()
	{
		cout << "Constructor : Exam" << endl;
	}
	~Exam()
	{
		cout << "Destructor : Exam" << endl;
	}
	void print(char buffer[50])
	{
		for (int i = 0; i <1; i++)
		{
			cout << "Question(Exam) : "; puts(buffer);
			cout << endl;
		}
	}
	void set(char buffer[50])
	{
		for (int i = 0; i <1; i++)
		{
			QQ[i] = buffer[i];
		}
	}
};

class Question
{
private :
	Test* test;
	Exam* exam;
public:
	Question(Test* test) : test(test) {};
	void setQ(char buffer[50])
	{
		test->set(buffer);
	}
	Question(Exam* exam) : exam(exam) {};
	void setE(char buffer[50])
	{
		exam->set(buffer);
	}
};
int main()
{
	char buffer[50];
	Test test;
	Question t(&test);
	for (int i = 0; i < 1; i++)
	{
		gets_s(buffer);
		t.setQ(buffer);
	}
	cout << "--------------" << endl;
	test.print(buffer);
	Exam exam;
	Question e(&exam);
	for (int i = 0; i < 1; i++)
	{
		gets_s(buffer);
		e.setE(buffer);
	}
	exam.print(buffer);


	system("pause");
	
}
