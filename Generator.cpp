#include "Generator.h"


Generator::Generator(int s)
{
	
		seed = s;
		cifreSeed = NumaraCifre(s);
	
}

int Generator::NumaraCifre(int n)
{
	int nr = 0;
	
	while (n != 0)
	{
		n = n / 10;
		nr++;
	}
	
	return nr;
}
