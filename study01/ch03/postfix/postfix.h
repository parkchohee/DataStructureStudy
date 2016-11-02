#pragma once

#include <iostream>
#include "arrayStack.h"

using namespace std;

class postfix
{
public:
	postfix();
	~postfix();

	double calcPostfixExpr(FILE *fp = stdin);
};

