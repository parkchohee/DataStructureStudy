#pragma once

#include <iostream>
#include <cstdlib>

#define STACKSIZE 5

using namespace std;

template<typename T>
class arrayStack
{
	int top;

	T data[STACKSIZE];

public:
	arrayStack() { top = -1; };
	~arrayStack() {};


	void push(T x);
	T pop();
	T peek();
	bool isEmpty();
	bool isFull();
	int size();
	void display() ;
};

template<typename T>
inline void arrayStack<T>::push(T x)
{
	if (isFull())
	{
		cout << "stack is full" << endl;
	}
	else
	{
		top++;
		data[top] = x;

	//	display();
	}
}

template<typename T>
inline T arrayStack<T>::pop()
{
	if (isEmpty())
	{
		cout << "error : stack is empty" << endl;
		exit(1);
	}
	else
	{
		return data[top--];
	}
}

template<typename T>
inline T arrayStack<T>::peek()
{
	if (isEmpty())
	{
		cout << "error : stack is empty" << endl;
		exit(1);
	}

	return data[top];
}

template<typename T>
inline bool arrayStack<T>::isEmpty()
{
	if (top == -1)
		return true;
	return false;
}

template<typename T>
inline bool arrayStack<T>::isFull()
{
	if (top + 1 == STACKSIZE)
		return true;
	return false;
}

template<typename T>
inline int arrayStack<T>::size()
{
	return top + 1;
}

template<typename T>
inline void arrayStack<T>::display()
{
	cout << "--------------------";
	cout << endl;
	for (int i = 0; i < top + 1; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
	cout << "--------------------" << endl;
}
