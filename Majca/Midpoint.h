#pragma once

#include <list>
#include "ElementList.h"

class Midpoint
{
public:
	Midpoint(){};
	~Midpoint(){};

	double CalculateT(double t)
	{
		return std::exp(t) - t - 1;
	}

	double df(double t, double x)
	{
		return x + t;
	}

	std::list<ElementList*> Start(int sizeData, double t0, double dt, double x0);
};

