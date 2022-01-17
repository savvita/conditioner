#include"Conditioner.h"

int Conditioner::setTemperature(int temp)
{
    if (temp < this->currentTemp)
    {
        while (temp != this->currentTemp)
        {
            this->currentTemp--;
        }
        this->temp = temp;
        this->temp = currentTemp;
    }
    else
    {
        while (temp != this->currentTemp)
        {
            this->currentTemp++;
        }
        this->temp = temp;
        this->temp = currentTemp;
    }
    return this->currentTemp;
}

void Conditioner::IncreaseTemperature()
{
    this->temp++;
}

void Conditioner::DecreaseTemperature()
{
    this->temp--;
}

void Conditioner::turnOn()
{
    this->state = true;
}

void Conditioner::turnOff()
{
    this->state = false;
}
