#pragma once

#include <iostream>

using namespace std;

class node
{
	int data;
	node* link;

public:
	node();
	node(int val);
	~node();

	node* getLink();
	void setLInk(node* next);
	void display();
};

