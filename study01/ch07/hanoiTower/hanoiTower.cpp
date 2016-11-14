#include "hanoiTower.h"



hanoiTower::hanoiTower(int n)
{
	move(n, 'A', 'B', 'C');
}


hanoiTower::~hanoiTower()
{
}

void hanoiTower::move(int n, char from, char temp, char to)	// from �� to�� �̵��Ѵ�.. temp�� �̿��Ͽ�..
{
	if (n == 1)
		cout << from << "�� " << to << "�� �̵�." << endl;
	else
	{
		move(n - 1, from, to, temp);
		cout << from << "�� " << to << "�� �̵�." << endl;
		move(n - 1, temp, from, to);
	}
}
