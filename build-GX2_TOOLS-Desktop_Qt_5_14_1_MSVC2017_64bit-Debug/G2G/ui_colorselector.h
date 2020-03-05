/********************************************************************************
** Form generated from reading UI file 'colorselector.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORSELECTOR_H
#define UI_COLORSELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorSelector
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frSelectColor;
    QPushButton *pbResetColor;

    void setupUi(QWidget *ColorSelector)
    {
        if (ColorSelector->objectName().isEmpty())
            ColorSelector->setObjectName(QString::fromUtf8("ColorSelector"));
        ColorSelector->resize(304, 23);
        horizontalLayout = new QHBoxLayout(ColorSelector);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frSelectColor = new QFrame(ColorSelector);
        frSelectColor->setObjectName(QString::fromUtf8("frSelectColor"));
        frSelectColor->setFrameShape(QFrame::Box);
        frSelectColor->setFrameShadow(QFrame::Plain);
        frSelectColor->setLineWidth(2);

        horizontalLayout->addWidget(frSelectColor);

        pbResetColor = new QPushButton(ColorSelector);
        pbResetColor->setObjectName(QString::fromUtf8("pbResetColor"));

        horizontalLayout->addWidget(pbResetColor);


        retranslateUi(ColorSelector);

        QMetaObject::connectSlotsByName(ColorSelector);
    } // setupUi

    void retranslateUi(QWidget *ColorSelector)
    {
        ColorSelector->setWindowTitle(QCoreApplication::translate("ColorSelector", "Form", nullptr));
        pbResetColor->setText(QCoreApplication::translate("ColorSelector", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorSelector: public Ui_ColorSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORSELECTOR_H
