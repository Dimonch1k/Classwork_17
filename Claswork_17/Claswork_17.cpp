#include <iostream>
using namespace std;



// Task 1
/*
#include "Car.h"
#include "Bicycle.h"
#include "Cart.h"

#include "Vechicle.h"


int main()
{
	Vechicle* car = new Car();
	Vechicle* bicycle = new Bicycle();
	Vechicle* cart = new Cart();


	car->setTime(15); // Minutes
	car->setPrice(4); // Price for one minute
	cout << "The price of the ride by car with " << car->getMinutes() << " and " 
		<< car->getPrice() << " is: " << car->countPrice()<< "\n\n";


	bicycle->setTime(40); // Minutes
	bicycle->setPrice(2); // Price for one minute
	cout << "The price of the ride by car with " << bicycle->getMinutes() << " and "
		<< bicycle->getPrice() << " is: " << bicycle->countPrice()<< "\n\n";


	cart->setTime(90); // Minutes
	cart->setPrice(1); // Price for one minute
	cout << "The price of the ride by car with " << cart->getMinutes() << " and "
		<< cart->getPrice() << " is: " << cart->countPrice()<< "\n\n\n\n";

}*/


//////////////////////////////////////////////


// Task 2

#include "Transport.h"

#include "Doors.h"
#include "Wheels.h"
#include "Engine.h"

int main()
{
	Transport* transport = new Transport();

	transport->setMark("BMW");
	cout << "Mark of Wheels: " << transport->getMark() << "\n\n";

	transport->setSize(20);
	cout << "Size of the Doors: " << transport->getSize() << "\n\n";

	transport->setSerialNum(2432678234);
	cout << "The serial number of the Engine is: " << transport->getSerialNum() << "\n\n\n";
}