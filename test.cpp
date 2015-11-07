#include<iostream>
#include"test.h"

using namespace std;

Test::Test()
{
	cout << "Called Constructor : Test" << endl;
}
void Test::set(const char array[256])
{
	this->array[256] = array;
}
void Test::get()
{
	cout << "Test's Questions are :" << this->array[256];
}
Test::~Test()
{
	cout << "Called Destructor : Test" << endl;
}
