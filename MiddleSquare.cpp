#include "MiddleSquare.h"

float MiddleSquare::Generate()
{
	int numarGenerat = (seed*seed / (int)pow(10, cifreSeed / 2)) % (int)pow(10, cifreSeed);

	if (NumaraCifre(numarGenerat) < cifreSeed)
	{
		numarGenerat = numarGenerat + pow(10, cifreSeed);
	}

	seed = numarGenerat;
	float a1 = pow(10, cifreSeed);
	float a2 = numarGenerat / a1;

	return a2;
}