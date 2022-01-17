#include "RemoteControl.h"

void RemoteControl::turnOn(Conditioner& cond) const
{
	cond.turnOn();
}

void RemoteControl::turnOff(Conditioner& cond) const
{
	cond.turnOff();
}

void RemoteControl::IncreaseTemp(Conditioner& cond) const
{
	cond.IncreaseTemperature();
}

void RemoteControl::DecreaseTemp(Conditioner& cond) const
{
	cond.DecreaseTemperature();
}

void RemoteControl::setTemperature(Conditioner& cond, int temp) const
{
	cond.setTemperature(temp);
}
