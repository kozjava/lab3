#pragma once
#include"exam.h"

class FinalExam : public Exam
{
	const char *array[256];
public:
	FinalExam();
	void set(const char array[256]);
	void get();
	~FinalExam();
};
