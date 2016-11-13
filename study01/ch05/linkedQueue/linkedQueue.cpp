#include "linkedQueue.h"



linkedQueue::linkedQueue() : front(NULL), rear(NULL)
{
}


linkedQueue::~linkedQueue()
{
	while (!isEmpty())
		delete dequeue();
}

bool linkedQueue::isEmpty()
{
	if (front == NULL)
		return true;
	else
		return false;
}

void linkedQueue::enqueue(node * item)
{
	if (isEmpty())
	{
		front = item;
		rear = item;
	}
	else
	{
		rear->setLInk(item);
		rear = item;
	}
}

node * linkedQueue::dequeue()
{
	if (isEmpty())
	{
		return NULL;
	}
	else
	{
		node * p = front;
		front = front->getLink();
		
		if (front == NULL) 
			rear = NULL;
		
		return p;
	}
}

node * linkedQueue::peek()
{
	return front;
}

void linkedQueue::display()
{
	cout << "[LIST QUEUE]" << endl;
	for (node* temp = front; temp != NULL; temp = temp->getLink())
		temp->display();
	cout << endl << "---------------" << endl;
}
