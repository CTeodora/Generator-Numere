#pragma once
#include "Generator.h"

class Evaluator 
{
public:
	Evaluator(Generator *obj, int totalNr);

	float eval();

private:
	Generator *Obj;

	float pi = 3.14;

	int TotalNr;

	int insideNr;

	float rez;
};

