#include "linkedStack.h"



linkedStack::linkedStack()
{
	top = NULL;
}

linkedStack::~linkedStack()
{
}

bool linkedStack::isEmpty()
{
	if (top == NULL)
		return true;
	else
		return false;
}

void linkedStack::push(node * item)
{
	if (isEmpty())
	{
		top = item;
	}
	else
	{
		item->setLink(top);
		top = item;
	}
}

node * linkedStack::pop()
{
	if (isEmpty())
	{
		return NULL;
	}
	else
	{
		node* p = top;
		top = top->getLink();
		return p;
	}
}

node * linkedStack::peek()
{
	return top;
}

void linkedStack::display()
{
	cout << "[LINK LIST]" << endl;
	for (node* temp = top; temp != NULL; temp = temp->getLink())
		temp->display();
	cout << "----------" << endl;
}
