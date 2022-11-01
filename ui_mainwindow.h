/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *graphic;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QDoubleSpinBox *doubleSpinBox_x_min;
    QDoubleSpinBox *doubleSpinBox_x_max;
    QDoubleSpinBox *doubleSpinBox_e;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 420);
        MainWindow->setDockOptions(QMainWindow::AnimatedDocks);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        graphic = new QPushButton(centralwidget);
        graphic->setObjectName("graphic");
        graphic->setGeometry(QRect(12, 331, 371, 31));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(12, 30, 376, 261));
        QFont font;
        font.setPointSize(18);
        groupBox->setFont(font);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 75, 71, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 110, 71, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 40, 51, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 145, 61, 16));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 40, 241, 21));
        doubleSpinBox_x_min = new QDoubleSpinBox(groupBox);
        doubleSpinBox_x_min->setObjectName("doubleSpinBox_x_min");
        doubleSpinBox_x_min->setGeometry(QRect(80, 75, 71, 22));
        doubleSpinBox_x_min->setMinimum(-10000.000000000000000);
        doubleSpinBox_x_min->setMaximum(10000.000000000000000);
        doubleSpinBox_x_min->setSingleStep(0.500000000000000);
        doubleSpinBox_x_max = new QDoubleSpinBox(groupBox);
        doubleSpinBox_x_max->setObjectName("doubleSpinBox_x_max");
        doubleSpinBox_x_max->setGeometry(QRect(80, 110, 71, 22));
        doubleSpinBox_x_max->setMinimum(-10000.000000000000000);
        doubleSpinBox_x_max->setMaximum(10000.000000000000000);
        doubleSpinBox_x_max->setSingleStep(0.500000000000000);
        doubleSpinBox_e = new QDoubleSpinBox(groupBox);
        doubleSpinBox_e->setObjectName("doubleSpinBox_e");
        doubleSpinBox_e->setGeometry(QRect(80, 145, 71, 22));
        doubleSpinBox_e->setMinimum(0.010000000000000);
        doubleSpinBox_e->setMaximum(10000.000000000000000);
        doubleSpinBox_e->setSingleStep(0.500000000000000);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Charts", nullptr));
        graphic->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\271\321\202\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\263\321\200\320\260\321\204\320\270\320\272\320\260:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X(min) =", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "X(max)=", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "F(x) =", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "E (>0) = ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
