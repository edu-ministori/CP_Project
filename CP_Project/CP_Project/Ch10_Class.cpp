#include <iostream>

#include "Ch10_Class.h"

using namespace std;

void Car::DriveVelocity()
{
	cout << Velocity << "km" << endl;
}

void Car::DriveTime()
{
	int LengthUnit = 100;
	cout << (100/Velocity) << "hour" << endl;
}