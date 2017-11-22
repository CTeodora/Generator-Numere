#include "Binomial.h"
#include <iostream>
using namespace std;

Binomial::Binomial(int n, float p, Generator *ob)
{
	mN = n;
	mP = p;
	mOb = ob;
}


float Binomial::generate()
{
	int x = 0;

	for (int i = 0; i < mN; i++)
	{
		float u = mOb->Generate();
		
		

		if (u < mP)
		{
			x++;
		}
	}

	

	float a1 = mN-1;
	float a2 = x / a1;

	return a2;
}