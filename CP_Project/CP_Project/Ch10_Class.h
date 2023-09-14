#pragma once

class Car
{
	char Name[30];
	int Year;
	int Velocity;

public:
	Car(int V)
	{
		Velocity = V;
	}
	void DriveVelocity();
	void DriveTime();
};