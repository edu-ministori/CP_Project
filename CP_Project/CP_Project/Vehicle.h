#pragma once

class Vehicle
{
private:
	int Year;

public:
	int Price;

	// Constructor 識情
	Vehicle(int _Year, int _Price);
	
	// Destructor 識情
	~Vehicle();
	
	// Method
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int newYear);
};