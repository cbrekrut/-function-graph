/********************************************************************************
** Form generated from reading UI file 'charts.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARTS_H
#define UI_CHARTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_charts
{
public:
    QFrame *linecharts;
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *charts)
    {
        if (charts->objectName().isEmpty())
            charts->setObjectName("charts");
        charts->resize(640, 485);
        linecharts = new QFrame(charts);
        linecharts->setObjectName("linecharts");
        linecharts->setGeometry(QRect(0, 0, 640, 500));
        horizontalLayout = new QHBoxLayout(linecharts);
        horizontalLayout->setObjectName("horizontalLayout");

        retranslateUi(charts);

        QMetaObject::connectSlotsByName(charts);
    } // setupUi

    void retranslateUi(QDialog *charts)
    {
        charts->setWindowTitle(QCoreApplication::translate("charts", "Charts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class charts: public Ui_charts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARTS_H
