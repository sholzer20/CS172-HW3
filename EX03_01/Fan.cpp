#include "Fan.h"

Fan::Fan()
{
	speed = 1;
	on = false;
	radius = 5.0;
}

int Fan::getSpeed()
{
	return speed;
}

void Fan::setSpeed(int newSpeed)
{
	if (newSpeed >= 1 && newSpeed <= 3) //Speed can only be set to 1, 2, or 3
	{
		speed = newSpeed;
	}
}

bool Fan::getOn()
{
	return on;
}

void Fan::setOn(bool newStatus)
{
	on = newStatus;
}

double Fan::getRadius()
{
	return radius;
}

void Fan::setRadius(double newRadius)
{
	radius = newRadius;
}
