#pragma once

#include <iostream>
#define QUEUESIZE 10

using namespace std;

template <typename T>
class circleQueue
{
public:
	int front;
	int rear;

	T data[QUEUESIZE];

public:
	circleQueue() { 
		front = 0;
		rear = 0;
	};
	~circleQueue() {};
	
	void enqueue(T item);
	T dequeue();
	T peek();
	bool isEmpty();
	bool isFull();
	void display();
};


template<typename T>
inline void circleQueue<T>::enqueue(T item)
{
	if (isFull())
	{
		cout << "error : queue is full" << endl;
		exit(1);
	}
	else
	{
		rear = ++rear % QUEUESIZE;
		data[rear] = item;
	}
}

template<typename T>
inline T circleQueue<T>::dequeue()
{
	if (isEmpty())
	{
		cout << "error : queue is empty" << endl;
		exit(1);
	}
	else
	{
		front = ++front % QUEUESIZE;
		return data[front];
	}
}

template<typename T>
inline T circleQueue<T>::peek()
{
	if (isEmpty())
	{
		cout << "error : queue is empty" << endl;
		exit(1);
	}
	else
	{
		return data[(front + 1) % QUEUESIZE];
	}
}

template<typename T>
inline bool circleQueue<T>::isEmpty()
{
	if (front == rear)
		return true;
	return false;
}

template<typename T>
inline bool circleQueue<T>::isFull()
{
	if (front == (rear + 1) % QUEUESIZE)
		return true;
	return false;
}

template<typename T>
inline void circleQueue<T>::display()
{
	cout << "----------------------" << endl;

	int queueSize;
	
	if (front > rear)
	{
		queueSize = rear + QUEUESIZE;
	}
	else
	{
		queueSize = rear;
	}
	
	for (int i = front + 1; i <= queueSize; i++)
		cout << data[i%QUEUESIZE] << " ";
	
	cout << endl;
	cout << "----------------------" << endl;
}
