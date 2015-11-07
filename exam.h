#pragma once
#include"test.h"

class Exam : public Test
{
	const char *array[256];
public:
	Exam();
	void set(const char array[256]);
	void get();
	~Exam();
};
