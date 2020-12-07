/********************************************************************************
** Form generated from reading UI file 'calcurator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCURATOR_H
#define UI_CALCURATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calcurator
{
public:
    QWidget *centralWidget;
    QTextEdit *te_number;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_plus;
    QPushButton *btn_minus;
    QPushButton *btn_divide;
    QPushButton *btn_mult;
    QPushButton *btn_0;
    QPushButton *btn_equal;
    QPushButton *btn_ac;
    QPushButton *btn_ce;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calcurator)
    {
        if (Calcurator->objectName().isEmpty())
            Calcurator->setObjectName(QStringLiteral("Calcurator"));
        Calcurator->resize(247, 199);
        centralWidget = new QWidget(Calcurator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        te_number = new QTextEdit(centralWidget);
        te_number->setObjectName(QStringLiteral("te_number"));
        te_number->setGeometry(QRect(10, 10, 191, 31));
        te_number->setFrameShape(QFrame::StyledPanel);
        te_number->setLineWidth(1);
        te_number->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        te_number->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        te_number->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        te_number->setAutoFormatting(QTextEdit::AutoNone);
        te_number->setReadOnly(true);
        te_number->setOverwriteMode(true);
        btn_1 = new QPushButton(centralWidget);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        btn_1->setGeometry(QRect(10, 110, 31, 25));
        btn_2 = new QPushButton(centralWidget);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        btn_2->setGeometry(QRect(50, 110, 31, 25));
        btn_3 = new QPushButton(centralWidget);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        btn_3->setGeometry(QRect(90, 110, 31, 25));
        btn_4 = new QPushButton(centralWidget);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        btn_4->setGeometry(QRect(10, 80, 31, 25));
        btn_5 = new QPushButton(centralWidget);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        btn_5->setGeometry(QRect(50, 80, 31, 25));
        btn_6 = new QPushButton(centralWidget);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        btn_6->setGeometry(QRect(90, 80, 31, 25));
        btn_7 = new QPushButton(centralWidget);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        btn_7->setGeometry(QRect(10, 50, 31, 25));
        btn_8 = new QPushButton(centralWidget);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        btn_8->setGeometry(QRect(50, 50, 31, 25));
        btn_9 = new QPushButton(centralWidget);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        btn_9->setGeometry(QRect(90, 50, 31, 25));
        btn_plus = new QPushButton(centralWidget);
        btn_plus->setObjectName(QStringLiteral("btn_plus"));
        btn_plus->setGeometry(QRect(130, 50, 31, 25));
        btn_minus = new QPushButton(centralWidget);
        btn_minus->setObjectName(QStringLiteral("btn_minus"));
        btn_minus->setGeometry(QRect(130, 80, 31, 25));
        btn_divide = new QPushButton(centralWidget);
        btn_divide->setObjectName(QStringLiteral("btn_divide"));
        btn_divide->setGeometry(QRect(170, 80, 31, 25));
        btn_mult = new QPushButton(centralWidget);
        btn_mult->setObjectName(QStringLiteral("btn_mult"));
        btn_mult->setGeometry(QRect(170, 50, 31, 25));
        btn_0 = new QPushButton(centralWidget);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        btn_0->setGeometry(QRect(130, 110, 31, 25));
        btn_equal = new QPushButton(centralWidget);
        btn_equal->setObjectName(QStringLiteral("btn_equal"));
        btn_equal->setGeometry(QRect(170, 110, 31, 25));
        btn_ac = new QPushButton(centralWidget);
        btn_ac->setObjectName(QStringLiteral("btn_ac"));
        btn_ac->setGeometry(QRect(210, 50, 31, 25));
        btn_ce = new QPushButton(centralWidget);
        btn_ce->setObjectName(QStringLiteral("btn_ce"));
        btn_ce->setGeometry(QRect(210, 80, 31, 25));
        Calcurator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calcurator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 247, 22));
        Calcurator->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Calcurator);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Calcurator->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Calcurator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Calcurator->setStatusBar(statusBar);

        retranslateUi(Calcurator);

        QMetaObject::connectSlotsByName(Calcurator);
    } // setupUi

    void retranslateUi(QMainWindow *Calcurator)
    {
        Calcurator->setWindowTitle(QApplication::translate("Calcurator", "Calcurator", Q_NULLPTR));
        btn_1->setText(QApplication::translate("Calcurator", "1", Q_NULLPTR));
        btn_2->setText(QApplication::translate("Calcurator", "2", Q_NULLPTR));
        btn_3->setText(QApplication::translate("Calcurator", "3", Q_NULLPTR));
        btn_4->setText(QApplication::translate("Calcurator", "4", Q_NULLPTR));
        btn_5->setText(QApplication::translate("Calcurator", "5", Q_NULLPTR));
        btn_6->setText(QApplication::translate("Calcurator", "6", Q_NULLPTR));
        btn_7->setText(QApplication::translate("Calcurator", "7", Q_NULLPTR));
        btn_8->setText(QApplication::translate("Calcurator", "8", Q_NULLPTR));
        btn_9->setText(QApplication::translate("Calcurator", "9", Q_NULLPTR));
        btn_plus->setText(QApplication::translate("Calcurator", "+", Q_NULLPTR));
        btn_minus->setText(QApplication::translate("Calcurator", "-", Q_NULLPTR));
        btn_divide->setText(QApplication::translate("Calcurator", "/", Q_NULLPTR));
        btn_mult->setText(QApplication::translate("Calcurator", "X", Q_NULLPTR));
        btn_0->setText(QApplication::translate("Calcurator", "0", Q_NULLPTR));
        btn_equal->setText(QApplication::translate("Calcurator", "=", Q_NULLPTR));
        btn_ac->setText(QApplication::translate("Calcurator", "AC", Q_NULLPTR));
        btn_ce->setText(QApplication::translate("Calcurator", "CE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Calcurator: public Ui_Calcurator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCURATOR_H
