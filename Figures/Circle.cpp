#include "Circle.h"
#include<string>

Circle::Circle() :Figure(), radius{ 0 }, color{ "" }
{
}

Circle::Circle(int x, int y, unsigned int radius) : Figure(x, y), radius{ radius }, color{""}
{
}

Circle::Circle(int x, int y, unsigned int radius, std::string color) : Figure(x, y), radius{ radius }, color{ color }
{
}

std::string Circle::getInfo() const
{
	std::string res = "X: ";
	res += std::to_string(this->x);
	res += " Y: ";
	res += std::to_string(this->y);
	res += "\nRadius: ";
	res += std::to_string(this->radius);
	res += "\nColor: ";
	res += this->color;
	return res;
}

RedCircle::RedCircle() : Circle(0, 0, 0, "Red")
{

}

RedCircle::RedCircle(int x, int y, unsigned int radius) : Circle(x, y, radius, "Red")
{
}

GreenCircle::GreenCircle() : Circle(0, 0, 0, "Green")
{
}

GreenCircle::GreenCircle(int x, int y, unsigned int radius) : Circle(x, y, radius, "Green")
{
}
