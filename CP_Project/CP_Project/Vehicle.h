#pragma once

class Vehicle
{
private:
	int Year;

public:
	int Price;

	// Constructor 명시적 선언
	Vehicle(); // Default Constructor
	Vehicle(int _Year, int _Price);
	
	// Destr4uctor 선언
	~Vehicle();
	
	// Method
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int newYear);
};