#pragma once
#include <iostream>
using namespace std;

class student
{
	int id;
	char* name;
	char* dept;
public:
	student();
	student(int i, char* n, char* d);
	~student();

	void set(int i, char* n, char* d);
	void display();


};

