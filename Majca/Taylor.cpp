#include "Taylor.h"
#include <iostream>

std::list<ElementList*> Taylor::Start(int sizeData, double t0, double dt, double x0)
{
	std::list<ElementList*> elementList;

	if (sizeData < 1)
		return elementList;

	double *data = new double[sizeData];

	elementList.push_back(new ElementList(t0, CalculateT(t0), x0));

	double t = t0;
	t += dt;

	for (int i = 1; i < sizeData; i++, t += dt)
	{
		elementList.push_back(new ElementList(t, CalculateT(t), taylor(i, t)));
	}

	return elementList;
}

double Taylor::factorial(int n)
{
	double fac = 1;
	for (int i = 2; i <= n; i++)
		fac *= i;

	return fac;
}

double Taylor::taylor(double n, double x)
{
	double t, s = 0;

	for (int i = 0; i < n; i++)
	{
		t = pow(x, i) / factorial(i);
		s += t;
	}

	return s;
}