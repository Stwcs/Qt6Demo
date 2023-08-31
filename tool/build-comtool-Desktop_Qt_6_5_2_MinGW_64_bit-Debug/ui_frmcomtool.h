/********************************************************************************
** Form generated from reading UI file 'frmcomtool.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCOMTOOL_H
#define UI_FRMCOMTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmComTool
{
public:
    QGridLayout *gridLayout_2;
    QTextEdit *textMain;
    QWidget *widgetRight;
    QVBoxLayout *verticalLayout;
    QFrame *frameTop;
    QGridLayout *gridLayout;
    QLabel *labPortName;
    QComboBox *cboxPortName;
    QLabel *labBaudRate;
    QLabel *labDataBit;
    QLabel *labParity;
    QLabel *labStopBit;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_5;
    QPushButton *pushButton;

    void setupUi(QWidget *frmComTool)
    {
        if (frmComTool->objectName().isEmpty())
            frmComTool->setObjectName("frmComTool");
        frmComTool->resize(800, 600);
        gridLayout_2 = new QGridLayout(frmComTool);
        gridLayout_2->setObjectName("gridLayout_2");
        textMain = new QTextEdit(frmComTool);
        textMain->setObjectName("textMain");

        gridLayout_2->addWidget(textMain, 0, 0, 1, 1);

        widgetRight = new QWidget(frmComTool);
        widgetRight->setObjectName("widgetRight");
        verticalLayout = new QVBoxLayout(widgetRight);
        verticalLayout->setObjectName("verticalLayout");
        frameTop = new QFrame(widgetRight);
        frameTop->setObjectName("frameTop");
        gridLayout = new QGridLayout(frameTop);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, 6, 6, 6);
        labPortName = new QLabel(frameTop);
        labPortName->setObjectName("labPortName");

        gridLayout->addWidget(labPortName, 0, 0, 1, 1);

        cboxPortName = new QComboBox(frameTop);
        cboxPortName->setObjectName("cboxPortName");
        cboxPortName->setEnabled(true);
        cboxPortName->setEditable(true);

        gridLayout->addWidget(cboxPortName, 0, 1, 1, 1);

        labBaudRate = new QLabel(frameTop);
        labBaudRate->setObjectName("labBaudRate");

        gridLayout->addWidget(labBaudRate, 1, 0, 1, 1);

        labDataBit = new QLabel(frameTop);
        labDataBit->setObjectName("labDataBit");

        gridLayout->addWidget(labDataBit, 2, 0, 1, 1);

        labParity = new QLabel(frameTop);
        labParity->setObjectName("labParity");

        gridLayout->addWidget(labParity, 3, 0, 1, 1);

        labStopBit = new QLabel(frameTop);
        labStopBit->setObjectName("labStopBit");

        gridLayout->addWidget(labStopBit, 4, 0, 1, 1);

        comboBox = new QComboBox(frameTop);
        comboBox->setObjectName("comboBox");
        comboBox->setEditable(true);

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        comboBox_2 = new QComboBox(frameTop);
        comboBox_2->setObjectName("comboBox_2");

        gridLayout->addWidget(comboBox_2, 2, 1, 1, 1);

        comboBox_3 = new QComboBox(frameTop);
        comboBox_3->setObjectName("comboBox_3");

        gridLayout->addWidget(comboBox_3, 3, 1, 1, 1);

        comboBox_4 = new QComboBox(frameTop);
        comboBox_4->setObjectName("comboBox_4");

        gridLayout->addWidget(comboBox_4, 4, 1, 1, 1);


        verticalLayout->addWidget(frameTop);


        gridLayout_2->addWidget(widgetRight, 0, 1, 1, 1);

        widget = new QWidget(frmComTool);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        comboBox_5 = new QComboBox(widget);
        comboBox_5->setObjectName("comboBox_5");
        comboBox_5->setEditable(true);

        horizontalLayout->addWidget(comboBox_5);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        widgetRight->raise();
        textMain->raise();
        labPortName->raise();
        labBaudRate->raise();
        labDataBit->raise();
        labParity->raise();
        labStopBit->raise();
        cboxPortName->raise();
        pushButton->raise();
        comboBox_5->raise();

        retranslateUi(frmComTool);

        QMetaObject::connectSlotsByName(frmComTool);
    } // setupUi

    void retranslateUi(QWidget *frmComTool)
    {
        frmComTool->setWindowTitle(QCoreApplication::translate("frmComTool", "Form", nullptr));
        labPortName->setText(QCoreApplication::translate("frmComTool", "\344\270\262\345\217\243\345\217\267", nullptr));
        labBaudRate->setText(QCoreApplication::translate("frmComTool", "\346\263\242\347\211\271\347\216\207", nullptr));
        labDataBit->setText(QCoreApplication::translate("frmComTool", "\346\225\260\346\215\256\344\275\215", nullptr));
        labParity->setText(QCoreApplication::translate("frmComTool", "\346\240\241\351\252\214\344\275\215", nullptr));
        labStopBit->setText(QCoreApplication::translate("frmComTool", "\345\201\234\346\255\242\344\275\215", nullptr));
        pushButton->setText(QCoreApplication::translate("frmComTool", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frmComTool: public Ui_frmComTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCOMTOOL_H
