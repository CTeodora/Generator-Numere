#include "Poisson.h"
#include<iostream>

using namespace std;

Poisson::Poisson(int lam, int n, float e, Generator *obj)
{
	mLam = lam;
	mN = n;
	mE = e;
	mObj = obj;
}

float Poisson::generate()
{
	int k = 0;
	float p = 1;

	float a = pow(mE, mLam);
	float l = 1/a;
	while (p > l && k < mN)
	{
		k++;
		float u = mObj->Generate();
		p = p * u;
		
	}

	

	float r =(k-1)/mN;
		
	return r;
}

