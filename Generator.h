#pragma once
#include <math.h>

class Generator
{
public:
	Generator() {}
	Generator(int s);
	
	
	virtual float Generate() = 0;

	int cifreSeed;
	int seed;
	int NumaraCifre(int);
};

