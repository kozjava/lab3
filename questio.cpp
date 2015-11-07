#include<iostream>
#include"question.h"

using namespace std;

Question::Question()
{
	cout << "Called Constructor : Question" << endl;
}
void Question::set(const char array[256])
{
	this->array[256] = array;
}
void Question::get()
{
	cout << "Question is :" << this->array[256];
}
Question::~Question()
{
	cout << "Called Destructor : Question" << endl;
}
