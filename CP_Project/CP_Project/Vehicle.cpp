#include <iostream>

#include "Vehicle.h"

using namespace std;

// Constructor 정의
Vehicle::Vehicle(int _Year, int _Price)
{
	Year = _Year;
	Price = _Price;

	cout << "출고 자동차연식 : ";
	PrintYear();
}

// Destructor 정의
Vehicle::~Vehicle()
{
	cout << "자동차 확인" << endl;
}

void Vehicle::PrintYear()
{
	cout << Year << endl;
}

void Vehicle::PrintPrice()
{
	cout << Price << endl;
}

// Get, Set Method
int Vehicle::GetYear()
{
	return Year;
}

void Vehicle::SetYear(int newYear)
{
	Year = newYear;
}