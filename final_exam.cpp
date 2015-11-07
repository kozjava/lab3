#include<iostream>
#include"final_exam.h"

using namespace std;

FinalExam::FinalExam()
{
	cout << "Called Constructor : Final Exam" << endl;
}
void FinalExam::set(const char array[256])
{
	this->array[256] = array;
}
void FinalExam::get()
{
	cout << "Final exam's Questions are :" << this->array[256];
}
FinalExam::~FinalExam()
{
	cout << "Called Destructor : Final Exam" << endl;
}
