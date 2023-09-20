#pragma once

#include "Ch15_PureVirtualParent.h"

#include <iostream>

using namespace std;

class PureVirtualChild : public PureVirtualParent
{
public:
	virtual void Print();

	void PrintClass() override;
};