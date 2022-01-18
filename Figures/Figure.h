#pragma once
#include<iostream>
#include<string>

class Figure
{
protected:
	int x;
	int y;
public:
	Figure();
	Figure(int x,int y);

	//gets
	inline int getX() const
	{
		return this->x;
	}

	inline int getY() const
	{
		return this->y;
	}

	//sets
	inline void setX(int x)
	{
		this->x = x;
	}

	inline void setY(int y)
	{
		this->y = y;
	}

	virtual std::string getInfo() const;
};

class Square :public Figure
{
protected:
	unsigned int size;

public:
	Square();
	Square(int x, int y, unsigned int size);

	//gets
	inline unsigned int getSize() const
	{
		return this->size;
	}

	//sets
	inline void setSize(unsigned int size)
	{
		this->size = size;
	}


	std::string getInfo() const;
};

