#pragma once
#include <iostream>
using namespace std;


class Engine
{
private:
	long long serialNum;

public:
	Engine();

	void setSerialNum(long long serialNum);
	long long getSerialNum();
};

