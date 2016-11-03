#include "circleQueue.h"

int main()
{
	circleQueue<int> _queue;

	_queue.enqueue(1);
	_queue.enqueue(2);
	_queue.enqueue(22);
	_queue.enqueue(23);

	_queue.display();

	cout << _queue.dequeue() << endl;

	_queue.display();


}