#pragma once
#include "Generator.h"


class MiddleSquare : 
	public Generator
{
public:
	MiddleSquare(int s) :Generator(s) {}
	float Generate();
};

