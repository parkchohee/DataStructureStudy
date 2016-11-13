#pragma once

#include "node.h"

class linkedStack
{
	node* top;

public:
	linkedStack();
	~linkedStack();

	bool isEmpty();
	void push(node* item);
	node* pop();
	node* peek();
	void display();
};

