#include "Cart.h"


double Cart::countPrice()
{
	return getMinutes() * getPrice();
}

void Cart::setTime(int minutes)
{
	this->minutes = minutes;
}

void Cart::setPrice(double price)
{
	this->price = price;
}