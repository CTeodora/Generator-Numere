#include "LCG.h"


float LCG::Generate()
{
	float x; 
	x = (seed*ma + mc) % mm;
	seed = x;
	
	return x / 100;
}
