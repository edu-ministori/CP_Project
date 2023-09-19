#pragma once

class Vehicle
{
private:
	int Year;

public:
	int Price;

	// Constructor ����� ����
	Vehicle(); // Default Constructor
	Vehicle(int _Year, int _Price);
	
	// Destr4uctor ����
	~Vehicle();
	
	// Method
	void PrintYear();
	void PrintPrice();
	int GetYear();
	void SetYear(int newYear);
};