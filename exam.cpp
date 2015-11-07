#include<iostream>
#include"exam.h"

using namespace std;

Exam::Exam()
{
	cout << "Called Constructor : Exam" << endl;
}
void Exam::get()
{
	cout << "Question's are :" << this->array[256];
}
void Exam::set(const char array[256])
{
	this->array[256] = array;;
}
Exam::~Exam()
{
	cout << "Called Destructor : Exam" << endl;
}
