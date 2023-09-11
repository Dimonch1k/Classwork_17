#include "Wheels.h"


Wheels::Wheels()
{
	mark = "";
}


void Wheels::setMark(string mark)
{
	this->mark = mark;
}

string Wheels::getMark()
{
	return mark;
}