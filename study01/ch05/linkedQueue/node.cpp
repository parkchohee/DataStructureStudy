#include "node.h"



node::node()
{
	data = 0;
	link = NULL;
}

node::node(int val) : data(val), link(NULL)
{
}


node::~node()
{
}

node * node::getLink()
{
	return link;
}

void node::setLInk(node * next)
{
	link = next;
}

void node::display()
{
	cout << "[" << data << "] ";
}
