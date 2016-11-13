#include "linkedQueue.h"

int main()
{
	linkedQueue queue;

	for (int i = 0; i < 10; i++)
		queue.enqueue(new node(i));

	queue.display();

	delete queue.dequeue();
	delete queue.dequeue();
	delete queue.dequeue();
	
	queue.display();

	return 0;
}