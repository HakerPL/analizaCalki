#include "RungegoKutty.h"

std::list<ElementList*> RungegoKutty::Start(int sizeData, double t0, double dt, double x0)
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
		double k1 = dt * df(t, data[i - 1]);
		double k2 = dt * df(t + 0.5 * dt, data[i - 1] + 0.5 * k1);
		double k3 = dt * df(t + 0.5 * dt, data[i - 1] + 0.5 * k2);
		double k4 = dt * df(t + dt, data[i - 1] + k3);
		data[i] = data[i - 1] + 1.0 / 6.0 * (k1 + 2 * k2 +2 * k3 + k4);
		elementList.push_back(new ElementList(t, CalculateT(t), data[i]));
	}

	return elementList;
}