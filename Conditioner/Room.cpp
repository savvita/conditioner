#include "Room.h"

Room::Room(int temp, const Conditioner& cond, const RemoteControl& control) :temp{ temp }, cond{ cond }, control{ control }
{
}

void Room::turnOnConditioner()
{
	this->control.turnOn(this->cond);
}

void Room::turnOffConditioner()
{
	this->control.turnOff(this->cond);
}

void Room::setTemperature(int temp)
{
	if (this->cond.getState())
	{
		this->control.setTemperature(this->cond, temp);
		this->temp = this->cond.getTemperature();
	}
}
