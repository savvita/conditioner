#pragma once
#include<iostream>
#include "Figure.h"
class Circle :
    public Figure
{
protected:
    unsigned int radius;
    std::string color;

public:
    Circle();
    Circle(int x, int y, unsigned int radius);
    Circle(int x, int y, unsigned int radius, std::string color);

    //gets
    inline unsigned int getRadius() const
    {
        return this->radius;
    }
    inline std::string getColor() const
    {
        return this->color;
    }

    //sets
    inline void setRadius(unsigned int radius)
    {
        this->radius = radius;
    }

    std::string getInfo() const;
};

class GreenCircle :
    public Circle
{
public:
    GreenCircle();
    GreenCircle(int x, int y, unsigned int radius);
};

class RedCircle :
    public Circle
{
public:
    RedCircle();
    RedCircle(int x, int y, unsigned int radius);
};

