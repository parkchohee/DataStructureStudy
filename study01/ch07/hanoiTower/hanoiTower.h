#pragma once

#include <iostream>

using namespace std;

class hanoiTower
{
	int height;

public:
	hanoiTower(int n = 0);
	~hanoiTower();

	void move(int n, char from, char temp, char to);
};

