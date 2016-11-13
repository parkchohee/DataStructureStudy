#include "node.h"



node::node()
{
}

node::node(int i, char * n, char * d) : student(i, n, d)
{
	link = NULL;
}

node::~node()
{
}

node * node::getLink()
{
	return link;
}

void node::setLink(node * next)
{
	link = next;
}
