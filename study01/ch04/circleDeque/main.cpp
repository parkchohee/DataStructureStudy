#include "circleDeque.h"

int main()
{
	circleDeque<int> _queue;

	_queue.addFront(1);
	_queue.display();
	_queue.addRear(2);
	_queue.display();
	_queue.deleteRear();
	_queue.display();

	
	
	/*circleQueue<int> _queue;

	_queue.enqueue(1);
	_queue.enqueue(2);
	_queue.enqueue(22);
	_queue.enqueue(23);

	_queue.display();

	cout << _queue.dequeue() << endl;

	_queue.display();
*/

}