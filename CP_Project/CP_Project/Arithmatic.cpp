#include <iostream>

#include "Arithmatic.h"

using namespace std;

void Arithmatic::Sum(int _Integer)
{
	Integer = _Integer;
	cout << Integer + Integer << endl;
}

void Arithmatic::Sum(float _DecimalNumber)
{
	DecimalNumber = _DecimalNumber;
	cout << DecimalNumber + DecimalNumber << endl;
}

void Arithmatic::Sum(int _Integer1, int _Integer2)
{
	Integer = _Integer1 + _Integer2;
	cout << Integer << endl;
}