#include "Bicycle.h"


double Bicycle::countPrice()
{
	return getMinutes() * getPrice();
}

void Bicycle::setTime(int minutes)
{
	this->minutes = minutes;
}

void Bicycle::setPrice(double price)
{
	this->price = price;
}