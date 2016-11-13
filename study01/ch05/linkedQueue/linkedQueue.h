#pragma once

#include "node.h"

class linkedQueue
{
	node* front;
	node* rear;

public:
	linkedQueue();
	~linkedQueue();

	bool isEmpty();
	void enqueue(node* item);
	node* dequeue();
	node* peek();
	void display();
};

