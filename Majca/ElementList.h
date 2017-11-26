#pragma once
class ElementList
{
	public:

		double t0;
		double f_t0;
		double data;

		ElementList(double t0, double f_t0, double data)
		{
			this->t0 = t0;
			this->f_t0 = f_t0;
			this->data = data;
		}

		~ElementList();
};

