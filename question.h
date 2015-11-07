#pragma once
#include"exam.h"
#include"test.h"
#include"final_exam.h"

class Question : public Test, public Exam, public FinalExam
{
	const char *array[256];
public:
	Question();
	void set(const char array[256]);
	void get();
	~Question();
};
