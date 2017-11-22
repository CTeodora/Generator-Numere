#pragma once
#include "Generator.h"

class Poisson 
{
public:
	Poisson(int lam, int n, float e, Generator *obj);
	float generate();
	

private:
	int mLam;
	float mN;
	float mE;
	Generator *mObj;
	
	
};



