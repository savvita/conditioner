#include "Figure.h"

Figure::Figure() :x{ 0 }, y{ 0 }
{
}

Figure::Figure(int x, int y) : x{ x }, y{ y }
{
}

std::string Figure::getInfo() const
{
	std::string res = "X: ";
	res += std::to_string(this->x);
	res += " Y: ";
	res += std::to_string(this->y);
	return res;
}

Square::Square() : Figure(), size{ 0 }
{
}

Square::Square(int x, int y, unsigned int size) : Figure(x, y), size{ size }
{
}

std::string Square::getInfo() const
{
	std::string res = Figure::getInfo();
	res += "\nSize: ";
	res += std::to_string(this->size);
	return res;
}
