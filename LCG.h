#pragma once
#include "Generator.h"
class LCG :
	public Generator
{
public:
	LCG(int s, int a, int c, int m) :Generator(s)
	{
		ma = a;
		mc = c;
		mm = m;
	}

	float Generate();

private:
	int ma;
	int mc;
	int mm;

};

