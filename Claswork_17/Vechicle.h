#pragma once
#include <iostream>
using namespace std;

class Vechicle
{
protected:
	int minutes;
	double price;

public:
	Vechicle();
	virtual double countPrice() = 0;

	virtual void setTime(int minutes) = 0;
	virtual void setPrice(double price) = 0;



	int getMinutes() {
		return minutes;
	}

	double getPrice()
	{
		return price;
	}
};

