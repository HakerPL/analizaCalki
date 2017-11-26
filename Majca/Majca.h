#pragma once

#include <QtWidgets/QMainWindow>
#include "GeneratedFiles/ui_Majca.h"
#include "Euler.h"
#include "Midpoint.h"
#include "RungegoKutty.h"
#include "Taylor.h"

class Majca : public QMainWindow
{
	Q_OBJECT

public:
	Majca(QWidget *parent = Q_NULLPTR);

private:
	Ui::MajcaClass ui;
	Taylor taylorClass;
	RungegoKutty rungegoClass;
	Midpoint midpointClass;
	Euler eulerClass;

	double df(double t, double x);

	double f(double t)
	{
		return std::exp(t) - t - 1;
	}

private slots:

	void Calculate();
};
