#include "Engine.h"


Engine::Engine()
{
	serialNum = 0;
}


void Engine::setSerialNum(long long serialNum)
{
	this->serialNum = serialNum;
}

long long Engine::getSerialNum()
{
	return serialNum;
}