#pragma once
#include "Bike.h"

class Atv : public Bike
{
	int Year = 2022;

public:
	void PrintPrice();
	void Print();
};