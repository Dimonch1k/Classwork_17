#include "Car.h"


double Car::countPrice()
{
	return getMinutes() * getPrice();
}

void Car::setTime(int minutes)
{
	this->minutes = minutes;
}

void Car::setPrice(double price)
{
	this->price = price;
}