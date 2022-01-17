#pragma once
#include"RemoteControl.h"

class Room
{
private:
	Conditioner cond;
	RemoteControl control;
	int temp;

public:
	Room(int temp, const Conditioner& cond, const RemoteControl& control);

	void turnOnConditioner();
	void turnOffConditioner();

	void setTemperature(int temp);
	inline int getTemperature() const
	{
		return this->temp;
	}
};

