#pragma once

#include <list>
#include "ElementList.h"

class Taylor
{
public:
	Taylor(){};
	~Taylor(){};

	double CalculateT(double t)
	{
		return std::exp(t) - t - 1;
	}

	std::list<ElementList*> Start(int sizeData, double t0, double dt, double x0);

private:

	double factorial(int n);
	double taylor(double n, double x);
};

