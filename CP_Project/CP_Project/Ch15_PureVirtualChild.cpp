#include "Ch15_PureVirtualChild.h"

#include <iostream>

using namespace std;

void PureVirtualChild::Print()
{
	cout << "Pure Virtual Child Class" << endl;
}

void PureVirtualChild::PrintClass()
{
	cout << "Pure Virtual Parent Function Override" << endl;
}