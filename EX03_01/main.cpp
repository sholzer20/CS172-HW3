#include <iostream>
#include "Fan.h"
using namespace std;

//This program generates two objects that represent fans. It then diplays all of the member variables from each fan object
//These member variables are the fan speed (1-3), a double radius, and a bool on where true means the fan is on

int main()
{
	Fan fan1; //create both Fan objects
	Fan fan2;

    fan1.setSpeed(3); //Setting the first fan to Speed 3, on, and 10.0 radius
	fan1.setRadius(10.0);
	fan1.setOn(true);

	fan2.setSpeed(2); //Setting the second fan to Speed 2, off, and 5.0 radius

	cout << "The first fan has a speed of " << fan1.getSpeed() << ", is on = " << boolalpha <<  fan1.getOn() << ", and has a radius of "
		<< fan1.getRadius() << "." << endl;

	cout << "The second fan has a speed of " << fan2.getSpeed() << ", is on = " << boolalpha << fan2.getOn() << ", and has a radius of "
		<< fan2.getRadius() << "." << endl;

	return 0;
}