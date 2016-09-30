#pragma once

//This is the header file for the Fan class
class Fan
{
private:
	int speed; //Speed of the fan
	bool on; //Whether the fan is on or off. True is on, false is off
	double radius; //Radius of the fan

public:
	Fan();

	int getSpeed(); //Accessor and modifier for speed
	void setSpeed(int newSpeed);

	bool getOn(); //Accessor and modifier for on
	void setOn(bool newStatus);

	double getRadius(); //Accessor and modifier for radius
	void setRadius(double newRadius);
};