#pragma once
#include"Conditioner.h"

class RemoteControl
{
public:
	void turnOn(Conditioner& cond) const;
	void turnOff(Conditioner& cond) const;

	void IncreaseTemp(Conditioner& cond) const;
	void DecreaseTemp(Conditioner& cond) const;

	void setTemperature(Conditioner& cond, int temp) const;
};

