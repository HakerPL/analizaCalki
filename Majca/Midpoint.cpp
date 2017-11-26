#include "Midpoint.h"

std::list<ElementList*> Midpoint::Start(int sizeData, double t0, double dt, double x0)
{
	std::list<ElementList*> elementList;

	if (sizeData < 1)
		return elementList;

	double *data = new double[sizeData];

	elementList.push_back(new ElementList(t0, CalculateT(t0), x0));
	data[0] = x0;

	double t = t0;
	t += dt;

	for (int i = 1; i < sizeData; i++, t += dt)
	{
		data[i] = data[i - 1] + dt * df(t + 0.5 * dt, data[i - 1] + 0.5 * dt * df(t, data[i - 1]));
		elementList.push_back(new ElementList(t, CalculateT(t), data[i]));
	}

	return elementList;
}