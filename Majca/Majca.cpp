#include "Majca.h"
#include "ElementList.h"
#include <sstream>

Majca::Majca(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);


	connect(ui.btnCalculate, SIGNAL(clicked()), this, SLOT(Calculate()));
}

void Majca::Calculate()
{
	ui.pltEuler->clear();
	ui.pltMidpoint->clear();
	ui.pltTaylor->clear();
	ui.pltRungegoKutty->clear();

	double size = ui.leCount->value();
	double t0 = ui.leStart->value();
	double dt = ui.leCoIle->value();

	double x0 = f(t0);

	std::list<ElementList*> euler = eulerClass.Start(size, t0, dt, x0);
	std::list<ElementList*> midpoint = midpointClass.Start(size, t0, dt, x0);
	std::list<ElementList*> taylor = taylorClass.Start(size, t0, dt, x0);
	std::list<ElementList*> rungego = rungegoClass.Start(size, t0, dt, x0);

	for (auto const& i : euler)
	{
		std::stringstream ss;
		ss << "t = " << i->t0 << "\t exp(t) = " << i->f_t0 << "\t data = " << i->data << std::endl;
		ui.pltEuler->insertPlainText(QString::fromStdString(ss.str()));
	}

	for (auto const& i : midpoint)
	{
		std::stringstream ss;
		ss << "t = " << i->t0 << "\t exp(t) = " << i->f_t0 << "\t data = " << i->data << std::endl;
		ui.pltMidpoint->insertPlainText(QString::fromStdString(ss.str()));
	}

	for (auto const& i : taylor)
	{
		std::stringstream ss;
		ss << "t = " << i->t0 << "\t exp(t) = " << i->f_t0 << "\t data = " << i->data << std::endl;
		ui.pltTaylor->insertPlainText(QString::fromStdString(ss.str()));
	}

	for (auto const& i : rungego)
	{
		std::stringstream ss;
		ss << "t = " << i->t0 << "\t exp(t) = " << i->f_t0 << "\t data = " << i->data << std::endl;
		ui.pltRungegoKutty->insertPlainText(QString::fromStdString(ss.str()));
	}
}
