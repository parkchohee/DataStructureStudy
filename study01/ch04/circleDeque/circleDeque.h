#pragma once
#include "circleQueue.h"

template <typename T>
class circleDeque :
	public circleQueue<T>
{
public:
	circleDeque() {};
	~circleDeque() {};

	void addFront(T item);
	T deleteFront();
	T getFront();
	void addRear(T item);
	T deleteRear();
	T getRear();
	/*void display();*/
};

template<typename T>
inline void circleDeque<T>::addFront(T item)
{
	if (isFull())
	{
		cout << "queue is full" << endl;
		exit(1);
	}
	else
	{
		data[front] = item;
		front = (front - 1 + QUEUESIZE) % QUEUESIZE;
	}
}

template<typename T>
inline T circleDeque<T>::deleteFront()
{
	return dequeue();
}

template<typename T>
inline T circleDeque<T>::getFront()
{
	return peek();
}

template<typename T>
inline void circleDeque<T>::addRear(T item)
{
	enqueue(item);
}

template<typename T>
inline T circleDeque<T>::deleteRear()
{
	if (isEmpty())
	{
		cout << "queue is empty" << endl;
		exit(1);
	}
	else
	{
		rear = (rear - 1 + QUEUESIZE) % QUEUESIZE;
		return data[(rear + 1) / QUEUESIZE];
	}
}

template<typename T>
inline T circleDeque<T>::getRear()
{
	if (isEmpty())
	{
		cout << "queue is empty" << endl;
		exit(1);
	}
	else
	{
		return data[rear];
	}
}
//
//template<typename T>
//inline void circleDeque<T>::display()
//{
//
//}
