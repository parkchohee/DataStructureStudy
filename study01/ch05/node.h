#pragma once

#include "student.h"

class node : public student
{
	node* link;

public:
	node();
	node(int i, char* n, char* d);
	~node();

	node* getLink();
	void setLink(node* next);
};

