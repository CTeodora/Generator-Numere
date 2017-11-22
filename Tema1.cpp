#include <iostream>
#include "stdafx.h"
#include "MiddleSquare.h"
#include"LCG.h"
#include "Evaluator.h"
#include "Binomial.h"
#include"Poisson.h"


using namespace std;

int main()
{
	float numar;
	int k1 = 0;
	int k2 = 0;
	int k3 = 0;
	int k4 = 0;
	int k5 = 0;
	int k6 = 0;
	int k7 = 0;
	int k8 = 0;
	int k9 = 0;
	int k10 = 0;
	int nr = 100;
	MiddleSquare midsq(6587);
	MiddleSquare midsq2(6436);
	//LCG lcg(27,16,38,100);
	
	

	Binomial b(100, 1, &midsq);
	
	for (int i = 0; i < nr; i++)
	{
		float u = b.generate();

		if (u <= 0.1)
		{
			k1++;
		}
		else if (u > 0.1 && u <= 0.2)
		{
			k2++;
		}
		else if (u > 0.2 && u <= 0.3)
		{
			k3++;
		}
		else if (u > 0.3 && u <= 0.4)
		{
			k4++;
		}
		else if (u > 0.4 && u <= 0.5)
		{
			k5++;
		}
		else if (u > 0.5 && u <= 0.6)
		{
			k6++;
		}
		else if (u > 0.6 && u <= 0.7)
		{
			k7++;
		}
		else if (u > 0.7 && u <= 0.8)
		{
			k8++;
		}
		else if (u > 0.8 && u <= 0.9)
		{
			k9++;
		}
		else if (u > 0.9 && u <= 1)
		{
			k10++;
		}
	}
	cout << k1 << endl;
	cout << k2 << endl;
	cout << k3 << endl;
	cout << k4 << endl;
	cout << k5 << endl;
	cout << k6 << endl;
	cout << k7 << endl;
	cout << k8 << endl;
	cout << k9 << endl;
	cout << k10 << endl;

	 k1 = 0;
	 k2 = 0;
	 k3 = 0;
	 k4 = 0;
	 k5 = 0;
	 k6 = 0;
	 k7 = 0;
	 k8 = 0;
	 k9 = 0;
	 k10 = 0;

	Poisson p(50,70,2.71,&midsq2);


	for (int i = 0; i < nr; i++)
	{
		float u = p.generate();

		if (u <= 0.1)
		{
			k1++;
		}
		else if (u > 0.1 && u <= 0.2)
		{
			k2++;
		}
		else if (u > 0.2 && u <= 0.3)
		{
			k3++;
		}
		else if (u > 0.3 && u <= 0.4)
		{
			k4++;
		}
		else if (u > 0.4 && u <= 0.5)
		{
			k5++;
		}
		else if (u > 0.5 && u <= 0.6)
		{
			k6++;
		}
		else if (u > 0.6 && u <= 0.7)
		{
			k7++;
		}
		else if (u > 0.7 && u <= 0.8)
		{
			k8++;
		}
		else if (u > 0.8 && u <= 0.9)
		{
			k9++;
		}
		else if (u > 0.9 && u <= 1)
		{
			k10++;
		}
	}

	cout << k1 << endl;
	cout << k2 << endl;
	cout << k3 << endl;
	cout << k4 << endl;
	cout << k5 << endl;
	cout << k6 << endl;
	cout << k7 << endl;
	cout << k8 << endl;
	cout << k9 << endl;
	cout << k10 << endl;
	
    return 0;
}

