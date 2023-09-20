#pragma once

class Animal
{
private:
	int Finger;
	int Leg;

public:
	Animal(); // Default Constructor
	Animal(int _Finger, int _Leg);
	void PrintFinger();
	void PrintLeg();
};