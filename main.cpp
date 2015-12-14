#include<iostream>
#include<string.h>
#include<conio.h>
#include<cstdio>
using namespace std;

class Question
{
private:
	char *text;
public:
	void setText(char *buffer)//
	{
		cout << "buffer :" << buffer << endl;
		text = buffer;
	}
	char* getText()
	{
		return text;
	}
	void Print()
	{
		cout << "Your Questions are : " << endl;
		cout << text << endl;
	}
};


class Test
{
private:
	Question *Arr;
	int size = 0;
	int current = 0;
public:
	Test()
	{
		cout << "Default constructor : Test " << endl;
	}
	~Test()
	{
		cout << "Destructor : Test" << endl;
	}
	Test(int s)
	{
		cout << "Constructor : Test " << endl;
		size = s;
		Arr = new Question[size];
	}
	void addQuestion(char *buffer)
	{
		if (current <= size)
		{
			Arr[current].setText(buffer);
			current++;
		}
		else
		{
			cout << "ERROR" << endl;
			abort();
		}
	}
	void getquestion()
	{
		for (int i = 0; i < current; i++)
		Arr[i].Print();
	}
	void setSize(int s)
	{
		size = s;
	}
};
class Exam : Test
{
private:
	int size = 0;
	int current = 0;
	Question* Mass;
public:
	Exam()
	{
		cout << "Default constructor : Exam " << endl;
	}
	Exam(int s)
	{
		cout << "Constructor : Exam" << endl;
		size = s;
		Mass = new Question[size];
	}
	~Exam()
	{
		cout << "Destructor : Exam" << endl;
	}
	void addQuestionExam(char* buffer)
	{
		if (current <= size)
		{
			Mass[current].setText(buffer);
			current++;
		}
		else
		{
			cout << "ERROR" << endl;
			abort();
		}
	}
	void getQuestionExam()
	{
		for (int i = 0; i < current; i++)
			Mass[i].Print();
	}
	void setSize(int s)
	{
		size = s;
	}
};

class LastExam : Exam
{
private:
	Question* Array;
	int size = 0;
	int current = 0;
public:
	void setSize(int s)
	{
		size = s;
	}
	LastExam()
	{
		cout << "Default constructor : Last Exam " << endl;
	}
	LastExam(int s)
	{
		cout << "Constructor : Last Exam" << endl;
		size = s;
		Array = new Question[size];
	}
	~LastExam()
	{
		cout << "Destructor : Last Exam" << endl;
	}
	void addQuestionLastExam(char* buffer)
	{
		if (current <= size)
		{
			Array[current].setText(buffer);
			current++;
		}
		else
		{
			cout << "ERROR" << endl;
			abort();
		}
	}
	void getQuestionLastExam()
	{
		for (int i = 0; i < current; i++)
			Array[i].Print();
	}
};

	int main()
	{
		Test T(3);
		for (int i = 0; i < 3; i++)
		{
			char *str = new char[250];
			cin.getline(str,250);
			T.addQuestion(str);
		}
		T.getquestion();
		cout << "----------" << endl;
		Exam E(3);
		for (int i = 0; i < 3; i++)
		{
			char* str2 = new char[250];
			cin.getline(str2, 250);
			E.addQuestionExam(str2);
		}
		E.getQuestionExam();
		cout << "----------" << endl;
		LastExam LE(3);
		for (int i = 0; i < 3; i++)
		{
			char* str3 = new char[250];
			cin.getline(str3, 250);
			LE.addQuestionLastExam(str3);
		}
		LE.getQuestionLastExam();
		system("pause");
		return 0;

	}
