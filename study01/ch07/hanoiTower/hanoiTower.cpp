#include "hanoiTower.h"



hanoiTower::hanoiTower(int n)
{
	move(n, 'A', 'B', 'C');
}


hanoiTower::~hanoiTower()
{
}

void hanoiTower::move(int n, char from, char temp, char to)	// from 을 to로 이동한다.. temp를 이용하여..
{
	if (n == 1)
		cout << from << "을 " << to << "로 이동." << endl;
	else
	{
		move(n - 1, from, to, temp);
		cout << from << "을 " << to << "로 이동." << endl;
		move(n - 1, temp, from, to);
	}
}
