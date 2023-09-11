#pragma once
#include <iostream>
using namespace std;

#include "Wheels.h"
#include "Doors.h"
#include "Engine.h"

class Transport : public Wheels, public Doors, public Engine {};
