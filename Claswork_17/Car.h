#pragma once
#include <iostream>
using namespace std;

#include "Vechicle.h"
class Car :
    public Vechicle
{
public:

    double countPrice() override;

    void setTime(int minutes) override;
    void setPrice(double price) override;
};

