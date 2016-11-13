#include "student.h"



student::student()
{
	id = 0;
	name = "";
	dept = "";
}

student::student(int i, char * n, char * d) : id(i), name(n), dept(d)
{
}


student::~student()
{
}

void student::set(int i, char * n, char * d)
{
	id = i;
	name = n;
	dept = d;
}

void student::display()
{
	cout << "id: " << id << "\t name: " << name << "\t dept: " << dept << endl;
}
