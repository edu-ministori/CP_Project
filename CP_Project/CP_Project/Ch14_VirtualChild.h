#pragma once

#include "Ch14_VirtualParent.h"

class VirtualChild : public VirtualParent
{
public:
	void PrintClass();
};

class VirtualChild2 : public VirtualParent2
{
public:
	virtual void PrintClass();
};