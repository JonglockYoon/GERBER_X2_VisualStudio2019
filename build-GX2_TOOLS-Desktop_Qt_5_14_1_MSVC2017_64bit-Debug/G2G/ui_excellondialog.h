/********************************************************************************
** Form generated from reading UI file 'excellondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXCELLONDIALOG_H
#define UI_EXCELLONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "doublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_ExcellonDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *rbInches;
    QRadioButton *rbMillimeters;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QSpinBox *sbxInteger;
    QLabel *label;
    QSpinBox *sbxDecimal;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rbLeading;
    QRadioButton *rbTrailing;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout;
    QLabel *label_2;
    DoubleSpinBox *dsbxX;
    QLabel *label_3;
    DoubleSpinBox *dsbxY;
    QPushButton *pbStep;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExcellonDialog)
    {
        if (ExcellonDialog->objectName().isEmpty())
            ExcellonDialog->setObjectName(QString::fromUtf8("ExcellonDialog"));
        ExcellonDialog->resize(168, 383);
        ExcellonDialog->setModal(false);
        verticalLayout = new QVBoxLayout(ExcellonDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        groupBox = new QGroupBox(ExcellonDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        rbInches = new QRadioButton(groupBox);
        rbInches->setObjectName(QString::fromUtf8("rbInches"));

        verticalLayout_3->addWidget(rbInches);

        rbMillimeters = new QRadioButton(groupBox);
        rbMillimeters->setObjectName(QString::fromUtf8("rbMillimeters"));

        verticalLayout_3->addWidget(rbMillimeters);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ExcellonDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        sbxInteger = new QSpinBox(groupBox_2);
        sbxInteger->setObjectName(QString::fromUtf8("sbxInteger"));
        sbxInteger->setWrapping(false);
        sbxInteger->setAlignment(Qt::AlignCenter);
        sbxInteger->setProperty("showGroupSeparator", QVariant(false));
        sbxInteger->setMinimum(1);
        sbxInteger->setMaximum(8);

        horizontalLayout->addWidget(sbxInteger);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        sbxDecimal = new QSpinBox(groupBox_2);
        sbxDecimal->setObjectName(QString::fromUtf8("sbxDecimal"));
        sbxDecimal->setAlignment(Qt::AlignCenter);
        sbxDecimal->setMinimum(1);
        sbxDecimal->setMaximum(8);

        horizontalLayout->addWidget(sbxDecimal);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(ExcellonDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        rbLeading = new QRadioButton(groupBox_3);
        rbLeading->setObjectName(QString::fromUtf8("rbLeading"));

        verticalLayout_2->addWidget(rbLeading);

        rbTrailing = new QRadioButton(groupBox_3);
        rbTrailing->setObjectName(QString::fromUtf8("rbTrailing"));

        verticalLayout_2->addWidget(rbTrailing);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(ExcellonDialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        formLayout = new QFormLayout(groupBox_4);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        dsbxX = new DoubleSpinBox(groupBox_4);
        dsbxX->setObjectName(QString::fromUtf8("dsbxX"));
        dsbxX->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        dsbxX->setDecimals(4);
        dsbxX->setMinimum(-1000.000000000000000);
        dsbxX->setMaximum(1000.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, dsbxX);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        dsbxY = new DoubleSpinBox(groupBox_4);
        dsbxY->setObjectName(QString::fromUtf8("dsbxY"));
        dsbxY->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        dsbxY->setDecimals(4);
        dsbxY->setMinimum(-1000.000000000000000);
        dsbxY->setMaximum(1000.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, dsbxY);

        pbStep = new QPushButton(groupBox_4);
        pbStep->setObjectName(QString::fromUtf8("pbStep"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, pbStep);

        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, pushButton);


        verticalLayout->addWidget(groupBox_4);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ExcellonDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ExcellonDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExcellonDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExcellonDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExcellonDialog);
    } // setupUi

    void retranslateUi(QDialog *ExcellonDialog)
    {
        ExcellonDialog->setWindowTitle(QCoreApplication::translate("ExcellonDialog", "Excellon Format", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ExcellonDialog", "Units", nullptr));
        rbInches->setText(QCoreApplication::translate("ExcellonDialog", "Inches", nullptr));
        rbMillimeters->setText(QCoreApplication::translate("ExcellonDialog", "Millimeters", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ExcellonDialog", "Format", nullptr));
        label->setText(QCoreApplication::translate("ExcellonDialog", ":", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ExcellonDialog", "Zeroes", nullptr));
        rbLeading->setText(QCoreApplication::translate("ExcellonDialog", "Leading", nullptr));
        rbTrailing->setText(QCoreApplication::translate("ExcellonDialog", "Trailing", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ExcellonDialog", "Offset", nullptr));
        label_2->setText(QCoreApplication::translate("ExcellonDialog", "X:", nullptr));
        label_3->setText(QCoreApplication::translate("ExcellonDialog", "Y:", nullptr));
        pbStep->setText(QCoreApplication::translate("ExcellonDialog", "x1.0", nullptr));
        pushButton->setText(QCoreApplication::translate("ExcellonDialog", "Flatten by selected", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExcellonDialog: public Ui_ExcellonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXCELLONDIALOG_H
