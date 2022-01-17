#pragma once
#include<iostream>

class Conditioner
{
private:
	int temp;
	bool state;
	int currentTemp;

public:
	Conditioner() :temp{ 20 }, state {false}
	{

	}
	//gets
	inline int getTemperature() const
	{
		return this->temp;
	}

	inline bool getState() const
	{
		return this->state;
	}

	int setTemperature(int temp);

	void IncreaseTemperature();
	void DecreaseTemperature();

	void turnOn();
	void turnOff();
};

