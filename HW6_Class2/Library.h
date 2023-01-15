#pragma once
#include <iostream>

class Library
{
public:
	Library(int books);
	~Library();

private:
	int* _books;
};

