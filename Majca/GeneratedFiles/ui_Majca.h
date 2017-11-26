/********************************************************************************
** Form generated from reading UI file 'Majca.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAJCA_H
#define UI_MAJCA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MajcaClass
{
public:
    QWidget *centralWidget;
    QPushButton *btnCalculate;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *leCount;
    QDoubleSpinBox *leStart;
    QDoubleSpinBox *leCoIle;
    QPlainTextEdit *pltEuler;
    QPlainTextEdit *pltMidpoint;
    QPlainTextEdit *pltTaylor;
    QPlainTextEdit *pltRungegoKutty;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MajcaClass)
    {
        if (MajcaClass->objectName().isEmpty())
            MajcaClass->setObjectName(QStringLiteral("MajcaClass"));
        MajcaClass->resize(988, 640);
        centralWidget = new QWidget(MajcaClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnCalculate = new QPushButton(centralWidget);
        btnCalculate->setObjectName(QStringLiteral("btnCalculate"));
        btnCalculate->setGeometry(QRect(640, 10, 191, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 47, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(510, 50, 47, 13));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 320, 47, 13));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(510, 320, 91, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 20, 61, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(230, 20, 31, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(420, 20, 31, 16));
        leCount = new QSpinBox(centralWidget);
        leCount->setObjectName(QStringLiteral("leCount"));
        leCount->setGeometry(QRect(90, 20, 91, 22));
        leStart = new QDoubleSpinBox(centralWidget);
        leStart->setObjectName(QStringLiteral("leStart"));
        leStart->setGeometry(QRect(270, 20, 91, 22));
        leCoIle = new QDoubleSpinBox(centralWidget);
        leCoIle->setObjectName(QStringLiteral("leCoIle"));
        leCoIle->setGeometry(QRect(460, 20, 91, 22));
        pltEuler = new QPlainTextEdit(centralWidget);
        pltEuler->setObjectName(QStringLiteral("pltEuler"));
        pltEuler->setGeometry(QRect(10, 70, 471, 241));
        pltMidpoint = new QPlainTextEdit(centralWidget);
        pltMidpoint->setObjectName(QStringLiteral("pltMidpoint"));
        pltMidpoint->setGeometry(QRect(510, 70, 471, 241));
        pltTaylor = new QPlainTextEdit(centralWidget);
        pltTaylor->setObjectName(QStringLiteral("pltTaylor"));
        pltTaylor->setGeometry(QRect(10, 340, 471, 241));
        pltRungegoKutty = new QPlainTextEdit(centralWidget);
        pltRungegoKutty->setObjectName(QStringLiteral("pltRungegoKutty"));
        pltRungegoKutty->setGeometry(QRect(510, 340, 471, 241));
        MajcaClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MajcaClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 988, 21));
        MajcaClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MajcaClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MajcaClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MajcaClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MajcaClass->setStatusBar(statusBar);

        retranslateUi(MajcaClass);

        QMetaObject::connectSlotsByName(MajcaClass);
    } // setupUi

    void retranslateUi(QMainWindow *MajcaClass)
    {
        MajcaClass->setWindowTitle(QApplication::translate("MajcaClass", "Majca", Q_NULLPTR));
        btnCalculate->setText(QApplication::translate("MajcaClass", "Calculate", Q_NULLPTR));
        label->setText(QApplication::translate("MajcaClass", "Euler", Q_NULLPTR));
        label_2->setText(QApplication::translate("MajcaClass", "Midpoint", Q_NULLPTR));
        label_3->setText(QApplication::translate("MajcaClass", "Taylor", Q_NULLPTR));
        label_4->setText(QApplication::translate("MajcaClass", "Rungego-Kutty", Q_NULLPTR));
        label_5->setText(QApplication::translate("MajcaClass", "Ile rekord\303\263w", Q_NULLPTR));
        label_6->setText(QApplication::translate("MajcaClass", "Start", Q_NULLPTR));
        label_7->setText(QApplication::translate("MajcaClass", "Co ile", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MajcaClass: public Ui_MajcaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAJCA_H
