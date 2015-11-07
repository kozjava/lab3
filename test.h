#pragma once

class Test
{
	const char *array[256];
public:
	Test();
	void set(const char array[256]);
	void get();
	~Test();
};
