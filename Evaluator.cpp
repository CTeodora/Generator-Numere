#include <iostream>
#include "Evaluator.h"
using namespace std;

Evaluator::Evaluator(Generator *obj, int totalNr)
{
	Obj = obj;
	TotalNr = totalNr;
}
float Evaluator::eval()
{
	insideNr = 0;

	for (int i = 0; i < TotalNr; i++)
	{
		float x = Obj->Generate();
		float y = Obj->Generate();

		if ((x*x + y*y) <= 1) 
		{
			insideNr++;
		}
		
	}
	cout << "Nr. de numere: " << insideNr << endl;

	float a1 = 4 * insideNr;
	float a2 = a1 / TotalNr;
	rez = pi - a2;
	return fabs(rez);
}
