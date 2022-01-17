#include <iostream>
#include "Room.h"


int main()
{
	Room r(30, Conditioner(), RemoteControl());
	std::cout << r.getTemperature() << "\n";
	r.setTemperature(15);
	std::cout << r.getTemperature() << "\n";
	r.setTemperature(45);
	std::cout << r.getTemperature() << "\n";
	r.turnOnConditioner();

	std::cout << r.getTemperature() << "\n";
	r.setTemperature(15);
	std::cout << r.getTemperature() << "\n";
	r.setTemperature(45);
	std::cout << r.getTemperature() << "\n";

}
