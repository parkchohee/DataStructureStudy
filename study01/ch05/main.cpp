#include "linkedStack.h"

int main()
{
	linkedStack stack;

	stack.push(new node(1, "test", "computer"));
	stack.push(new node(2, "test", "computer1"));
	stack.push(new node(3, "test", "computer2"));

	stack.display();

	stack.pop()->display();
	stack.display();

	stack.peek()->display();
	stack.display();

	return 0;
}