/********************************************************************************
** Form generated from reading UI file 'SoundSpeedOfSeaWater.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOUNDSPEEDOFSEAWATER_H
#define UI_SOUNDSPEEDOFSEAWATER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SoundSpeedOfSeaWaterClass
{
public:
    QWidget *centralWidget;
    QLabel *lblFunType;
    QComboBox *cbxFunType;
    QLabel *lblTemp;
    QLabel *lblSalt;
    QLabel *lblDepth;
    QLineEdit *txtTemp;
    QLineEdit *txtSalt;
    QLineEdit *txtDepth;
    QLabel *lblSpeed;
    QLineEdit *txtSpeed;
    QPushButton *btnCalculate;
    QPushButton *btnReset;

    void setupUi(QMainWindow *SoundSpeedOfSeaWaterClass)
    {
        if (SoundSpeedOfSeaWaterClass->objectName().isEmpty())
            SoundSpeedOfSeaWaterClass->setObjectName(QStringLiteral("SoundSpeedOfSeaWaterClass"));
        SoundSpeedOfSeaWaterClass->resize(301, 201);
        centralWidget = new QWidget(SoundSpeedOfSeaWaterClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblFunType = new QLabel(centralWidget);
        lblFunType->setObjectName(QStringLiteral("lblFunType"));
        lblFunType->setGeometry(QRect(10, 10, 91, 16));
        cbxFunType = new QComboBox(centralWidget);
        cbxFunType->setObjectName(QStringLiteral("cbxFunType"));
        cbxFunType->setGeometry(QRect(170, 10, 121, 22));
        lblTemp = new QLabel(centralWidget);
        lblTemp->setObjectName(QStringLiteral("lblTemp"));
        lblTemp->setGeometry(QRect(10, 40, 151, 16));
        lblSalt = new QLabel(centralWidget);
        lblSalt->setObjectName(QStringLiteral("lblSalt"));
        lblSalt->setGeometry(QRect(10, 70, 151, 16));
        lblDepth = new QLabel(centralWidget);
        lblDepth->setObjectName(QStringLiteral("lblDepth"));
        lblDepth->setGeometry(QRect(10, 100, 151, 16));
        txtTemp = new QLineEdit(centralWidget);
        txtTemp->setObjectName(QStringLiteral("txtTemp"));
        txtTemp->setGeometry(QRect(170, 40, 121, 20));
        txtSalt = new QLineEdit(centralWidget);
        txtSalt->setObjectName(QStringLiteral("txtSalt"));
        txtSalt->setGeometry(QRect(170, 70, 121, 20));
        txtDepth = new QLineEdit(centralWidget);
        txtDepth->setObjectName(QStringLiteral("txtDepth"));
        txtDepth->setGeometry(QRect(170, 100, 121, 20));
        lblSpeed = new QLabel(centralWidget);
        lblSpeed->setObjectName(QStringLiteral("lblSpeed"));
        lblSpeed->setGeometry(QRect(10, 130, 151, 16));
        txtSpeed = new QLineEdit(centralWidget);
        txtSpeed->setObjectName(QStringLiteral("txtSpeed"));
        txtSpeed->setGeometry(QRect(170, 130, 121, 20));
        txtSpeed->setReadOnly(true);
        btnCalculate = new QPushButton(centralWidget);
        btnCalculate->setObjectName(QStringLiteral("btnCalculate"));
        btnCalculate->setGeometry(QRect(10, 160, 81, 31));
        btnReset = new QPushButton(centralWidget);
        btnReset->setObjectName(QStringLiteral("btnReset"));
        btnReset->setGeometry(QRect(210, 160, 81, 31));
        SoundSpeedOfSeaWaterClass->setCentralWidget(centralWidget);

        retranslateUi(SoundSpeedOfSeaWaterClass);
        QObject::connect(cbxFunType, SIGNAL(activated(int)), SoundSpeedOfSeaWaterClass, SLOT(ComboBox_Actived(int)));
        QObject::connect(btnCalculate, SIGNAL(clicked()), SoundSpeedOfSeaWaterClass, SLOT(btnCalculate_Clicked()));
        QObject::connect(btnReset, SIGNAL(clicked()), SoundSpeedOfSeaWaterClass, SLOT(btnReset_Clicked()));

        QMetaObject::connectSlotsByName(SoundSpeedOfSeaWaterClass);
    } // setupUi

    void retranslateUi(QMainWindow *SoundSpeedOfSeaWaterClass)
    {
        SoundSpeedOfSeaWaterClass->setWindowTitle(QApplication::translate("SoundSpeedOfSeaWaterClass", "\345\243\260\351\200\237\347\273\217\351\252\214\345\205\254\345\274\217\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
        lblFunType->setText(QApplication::translate("SoundSpeedOfSeaWaterClass", "\347\273\217\351\252\214\345\205\254\345\274\217\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        lblTemp->setText(QApplication::translate("SoundSpeedOfSeaWaterClass", "\346\270\251\345\272\246/\302\260C\357\274\232", Q_NULLPTR));
        lblSalt->setText(QApplication::translate("SoundSpeedOfSeaWaterClass", "\347\233\220\345\272\246/ppt\357\274\232", Q_NULLPTR));
        lblDepth->setText(QApplication::translate("SoundSpeedOfSeaWaterClass", "\346\267\261\345\272\246/m\357\274\232", Q_NULLPTR));
        lblSpeed->setText(QApplication::translate("SoundSpeedOfSeaWaterClass", "\347\220\206\350\256\272\345\243\260\351\200\237/(m/s)\357\274\232", Q_NULLPTR));
        btnCalculate->setText(QApplication::translate("SoundSpeedOfSeaWaterClass", "\350\256\241\347\256\227", Q_NULLPTR));
        btnReset->setText(QApplication::translate("SoundSpeedOfSeaWaterClass", "\351\207\215\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SoundSpeedOfSeaWaterClass: public Ui_SoundSpeedOfSeaWaterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOUNDSPEEDOFSEAWATER_H
