#pragma once
#include "Generator.h"

class Binomial
{
public:
	Binomial(int n, float p, Generator * ob);
	float generate();

private:
	
	int mN;
	float mP;
	Generator *mOb;
	

};
