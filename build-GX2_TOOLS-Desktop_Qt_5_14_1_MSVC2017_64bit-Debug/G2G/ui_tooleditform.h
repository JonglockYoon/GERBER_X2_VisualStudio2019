/********************************************************************************
** Form generated from reading UI file 'tooleditform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLEDITFORM_H
#define UI_TOOLEDITFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "doublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_ToolEditForm
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *cbxToolType;
    QLabel *lblUnits;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QCheckBox *chbxAutoName;
    QLabel *lblToolType;
    QTextEdit *teNote;
    QLabel *label;
    QHBoxLayout *hlUnuts;
    QComboBox *cbxUnits;
    QComboBox *cbxFeedSpeeds;
    QLineEdit *leName;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *diameterLabel;
    DoubleSpinBox *dsbxDiameter;
    QLabel *sideAngleLabel;
    DoubleSpinBox *dsbxAngle;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    DoubleSpinBox *dsbxPassDepth;
    QLabel *label_4;
    QHBoxLayout *hlayStepover;
    DoubleSpinBox *dsbxStepover;
    DoubleSpinBox *dsbxStepoverPercent;
    QLabel *label_5;
    QHBoxLayout *hlayOneTurnCut;
    DoubleSpinBox *dsbxOneTurnCut;
    DoubleSpinBox *dsbxOneTurnCutPercent;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_4;
    QLabel *label_6;
    DoubleSpinBox *dsbxSpindleSpeed;
    QCheckBox *chbxFeedRate;
    DoubleSpinBox *dsbxFeedRate;
    QCheckBox *chbxPlungeRate;
    DoubleSpinBox *dsbxPlungeRate;
    QPushButton *pbApply;

    void setupUi(QWidget *ToolEditForm)
    {
        if (ToolEditForm->objectName().isEmpty())
            ToolEditForm->setObjectName(QString::fromUtf8("ToolEditForm"));
        ToolEditForm->resize(325, 512);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ToolEditForm->sizePolicy().hasHeightForWidth());
        ToolEditForm->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ToolEditForm);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(ToolEditForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, -1, 6, 6);
        cbxToolType = new QComboBox(groupBox);
        cbxToolType->addItem(QString());
        cbxToolType->addItem(QString());
        cbxToolType->addItem(QString());
        cbxToolType->addItem(QString());
        cbxToolType->setObjectName(QString::fromUtf8("cbxToolType"));

        gridLayout->addWidget(cbxToolType, 0, 1, 1, 1);

        lblUnits = new QLabel(groupBox);
        lblUnits->setObjectName(QString::fromUtf8("lblUnits"));
        lblUnits->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lblUnits, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        chbxAutoName = new QCheckBox(groupBox);
        chbxAutoName->setObjectName(QString::fromUtf8("chbxAutoName"));
        chbxAutoName->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_3->addWidget(chbxAutoName);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        lblToolType = new QLabel(groupBox);
        lblToolType->setObjectName(QString::fromUtf8("lblToolType"));
        lblToolType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lblToolType, 0, 0, 1, 1);

        teNote = new QTextEdit(groupBox);
        teNote->setObjectName(QString::fromUtf8("teNote"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(teNote->sizePolicy().hasHeightForWidth());
        teNote->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(teNote, 2, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        hlUnuts = new QHBoxLayout();
        hlUnuts->setObjectName(QString::fromUtf8("hlUnuts"));
        cbxUnits = new QComboBox(groupBox);
        cbxUnits->addItem(QString());
        cbxUnits->addItem(QString());
        cbxUnits->setObjectName(QString::fromUtf8("cbxUnits"));
        cbxUnits->setEnabled(false);

        hlUnuts->addWidget(cbxUnits);

        cbxFeedSpeeds = new QComboBox(groupBox);
        cbxFeedSpeeds->addItem(QString());
        cbxFeedSpeeds->addItem(QString());
        cbxFeedSpeeds->addItem(QString());
        cbxFeedSpeeds->addItem(QString());
        cbxFeedSpeeds->setObjectName(QString::fromUtf8("cbxFeedSpeeds"));

        hlUnuts->addWidget(cbxFeedSpeeds);


        gridLayout->addLayout(hlUnuts, 3, 1, 1, 1);

        leName = new QLineEdit(groupBox);
        leName->setObjectName(QString::fromUtf8("leName"));

        gridLayout->addWidget(leName, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ToolEditForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setContentsMargins(6, 9, 6, 6);
        diameterLabel = new QLabel(groupBox_2);
        diameterLabel->setObjectName(QString::fromUtf8("diameterLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, diameterLabel);

        dsbxDiameter = new DoubleSpinBox(groupBox_2);
        dsbxDiameter->setObjectName(QString::fromUtf8("dsbxDiameter"));
        dsbxDiameter->setDecimals(3);
        dsbxDiameter->setMaximum(10.000000000000000);
        dsbxDiameter->setSingleStep(0.100000000000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, dsbxDiameter);

        sideAngleLabel = new QLabel(groupBox_2);
        sideAngleLabel->setObjectName(QString::fromUtf8("sideAngleLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, sideAngleLabel);

        dsbxAngle = new DoubleSpinBox(groupBox_2);
        dsbxAngle->setObjectName(QString::fromUtf8("dsbxAngle"));
        dsbxAngle->setDecimals(1);
        dsbxAngle->setMaximum(180.000000000000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, dsbxAngle);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(ToolEditForm);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        formLayout_3 = new QFormLayout(groupBox_3);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_3->setContentsMargins(6, 9, 6, 6);
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        dsbxPassDepth = new DoubleSpinBox(groupBox_3);
        dsbxPassDepth->setObjectName(QString::fromUtf8("dsbxPassDepth"));
        dsbxPassDepth->setDecimals(3);
        dsbxPassDepth->setMaximum(10.000000000000000);
        dsbxPassDepth->setSingleStep(0.100000000000000);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, dsbxPassDepth);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_4);

        hlayStepover = new QHBoxLayout();
        hlayStepover->setObjectName(QString::fromUtf8("hlayStepover"));
        hlayStepover->setContentsMargins(0, 0, 0, 0);
        dsbxStepover = new DoubleSpinBox(groupBox_3);
        dsbxStepover->setObjectName(QString::fromUtf8("dsbxStepover"));
        dsbxStepover->setDecimals(3);
        dsbxStepover->setMaximum(10.000000000000000);
        dsbxStepover->setSingleStep(0.010000000000000);

        hlayStepover->addWidget(dsbxStepover);

        dsbxStepoverPercent = new DoubleSpinBox(groupBox_3);
        dsbxStepoverPercent->setObjectName(QString::fromUtf8("dsbxStepoverPercent"));
        dsbxStepoverPercent->setDecimals(2);
        dsbxStepoverPercent->setMaximum(50.000000000000000);
        dsbxStepoverPercent->setSingleStep(0.100000000000000);

        hlayStepover->addWidget(dsbxStepoverPercent);


        formLayout_3->setLayout(1, QFormLayout::FieldRole, hlayStepover);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_5);

        hlayOneTurnCut = new QHBoxLayout();
        hlayOneTurnCut->setObjectName(QString::fromUtf8("hlayOneTurnCut"));
        hlayOneTurnCut->setContentsMargins(0, 0, 0, 0);
        dsbxOneTurnCut = new DoubleSpinBox(groupBox_3);
        dsbxOneTurnCut->setObjectName(QString::fromUtf8("dsbxOneTurnCut"));
        dsbxOneTurnCut->setDecimals(3);
        dsbxOneTurnCut->setMaximum(10.000000000000000);
        dsbxOneTurnCut->setSingleStep(0.010000000000000);

        hlayOneTurnCut->addWidget(dsbxOneTurnCut);

        dsbxOneTurnCutPercent = new DoubleSpinBox(groupBox_3);
        dsbxOneTurnCutPercent->setObjectName(QString::fromUtf8("dsbxOneTurnCutPercent"));
        dsbxOneTurnCutPercent->setDecimals(2);
        dsbxOneTurnCutPercent->setMaximum(100.000000000000000);
        dsbxOneTurnCutPercent->setSingleStep(0.100000000000000);

        hlayOneTurnCut->addWidget(dsbxOneTurnCutPercent);


        formLayout_3->setLayout(2, QFormLayout::FieldRole, hlayOneTurnCut);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(ToolEditForm);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        formLayout_4 = new QFormLayout(groupBox_4);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_4->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_4->setContentsMargins(6, 9, 6, 6);
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_6);

        dsbxSpindleSpeed = new DoubleSpinBox(groupBox_4);
        dsbxSpindleSpeed->setObjectName(QString::fromUtf8("dsbxSpindleSpeed"));
        dsbxSpindleSpeed->setDecimals(0);
        dsbxSpindleSpeed->setMaximum(100000.000000000000000);
        dsbxSpindleSpeed->setSingleStep(1000.000000000000000);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, dsbxSpindleSpeed);

        chbxFeedRate = new QCheckBox(groupBox_4);
        chbxFeedRate->setObjectName(QString::fromUtf8("chbxFeedRate"));
        chbxFeedRate->setLayoutDirection(Qt::RightToLeft);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, chbxFeedRate);

        dsbxFeedRate = new DoubleSpinBox(groupBox_4);
        dsbxFeedRate->setObjectName(QString::fromUtf8("dsbxFeedRate"));
        dsbxFeedRate->setDecimals(3);
        dsbxFeedRate->setMaximum(100000.000000000000000);
        dsbxFeedRate->setSingleStep(0.100000000000000);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, dsbxFeedRate);

        chbxPlungeRate = new QCheckBox(groupBox_4);
        chbxPlungeRate->setObjectName(QString::fromUtf8("chbxPlungeRate"));
        chbxPlungeRate->setLayoutDirection(Qt::RightToLeft);

        formLayout_4->setWidget(2, QFormLayout::LabelRole, chbxPlungeRate);

        dsbxPlungeRate = new DoubleSpinBox(groupBox_4);
        dsbxPlungeRate->setObjectName(QString::fromUtf8("dsbxPlungeRate"));
        dsbxPlungeRate->setDecimals(3);
        dsbxPlungeRate->setMaximum(100000.000000000000000);
        dsbxPlungeRate->setSingleStep(0.100000000000000);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, dsbxPlungeRate);


        verticalLayout->addWidget(groupBox_4);

        pbApply = new QPushButton(ToolEditForm);
        pbApply->setObjectName(QString::fromUtf8("pbApply"));

        verticalLayout->addWidget(pbApply);


        retranslateUi(ToolEditForm);

        cbxToolType->setCurrentIndex(0);
        cbxFeedSpeeds->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ToolEditForm);
    } // setupUi

    void retranslateUi(QWidget *ToolEditForm)
    {
        ToolEditForm->setWindowTitle(QCoreApplication::translate("ToolEditForm", "Tool", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ToolEditForm", "Tool Info", nullptr));
        cbxToolType->setItemText(0, QCoreApplication::translate("ToolEditForm", "Drill", nullptr));
        cbxToolType->setItemText(1, QCoreApplication::translate("ToolEditForm", "End Mill", nullptr));
        cbxToolType->setItemText(2, QCoreApplication::translate("ToolEditForm", "Engraving", nullptr));
        cbxToolType->setItemText(3, QCoreApplication::translate("ToolEditForm", "Laser", nullptr));

        lblUnits->setText(QCoreApplication::translate("ToolEditForm", "Units", nullptr));
        label_2->setText(QCoreApplication::translate("ToolEditForm", "Name", nullptr));
        chbxAutoName->setText(QString());
        lblToolType->setText(QCoreApplication::translate("ToolEditForm", "Tool Type", nullptr));
        label->setText(QCoreApplication::translate("ToolEditForm", "Note", nullptr));
        cbxUnits->setItemText(0, QCoreApplication::translate("ToolEditForm", "mm", nullptr));
        cbxUnits->setItemText(1, QCoreApplication::translate("ToolEditForm", "inches", nullptr));

        cbxFeedSpeeds->setItemText(0, QCoreApplication::translate("ToolEditForm", "mm/sec", nullptr));
        cbxFeedSpeeds->setItemText(1, QCoreApplication::translate("ToolEditForm", "mm/min", nullptr));
        cbxFeedSpeeds->setItemText(2, QCoreApplication::translate("ToolEditForm", "cm/min", nullptr));
        cbxFeedSpeeds->setItemText(3, QCoreApplication::translate("ToolEditForm", "m/min", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("ToolEditForm", "Geometry", nullptr));
        diameterLabel->setText(QCoreApplication::translate("ToolEditForm", "Diameter", nullptr));
        dsbxDiameter->setSuffix(QCoreApplication::translate("ToolEditForm", " mm", nullptr));
        sideAngleLabel->setText(QCoreApplication::translate("ToolEditForm", "Side Angle", nullptr));
        dsbxAngle->setSuffix(QCoreApplication::translate("ToolEditForm", " \302\260", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ToolEditForm", "Cutting Parameters", nullptr));
        label_3->setText(QCoreApplication::translate("ToolEditForm", "Pass or Depth", nullptr));
        dsbxPassDepth->setSuffix(QCoreApplication::translate("ToolEditForm", " mm", nullptr));
        label_4->setText(QCoreApplication::translate("ToolEditForm", "Stepover", nullptr));
        dsbxStepover->setSuffix(QCoreApplication::translate("ToolEditForm", " mm", nullptr));
        dsbxStepoverPercent->setSuffix(QCoreApplication::translate("ToolEditForm", " %", nullptr));
        label_5->setText(QCoreApplication::translate("ToolEditForm", "One-turn Cut", nullptr));
        dsbxOneTurnCut->setSuffix(QCoreApplication::translate("ToolEditForm", " mm", nullptr));
        dsbxOneTurnCutPercent->setSuffix(QCoreApplication::translate("ToolEditForm", " %", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ToolEditForm", "Feed Speeds", nullptr));
        label_6->setText(QCoreApplication::translate("ToolEditForm", "Spindle Speed", nullptr));
        dsbxSpindleSpeed->setSuffix(QCoreApplication::translate("ToolEditForm", " r.p.m.", nullptr));
#if QT_CONFIG(tooltip)
        chbxFeedRate->setToolTip(QCoreApplication::translate("ToolEditForm", "If checked then automatic calculate!", nullptr));
#endif // QT_CONFIG(tooltip)
        chbxFeedRate->setText(QCoreApplication::translate("ToolEditForm", "Feed Rate", nullptr));
        dsbxFeedRate->setSuffix(QCoreApplication::translate("ToolEditForm", " mm/sec", nullptr));
#if QT_CONFIG(tooltip)
        chbxPlungeRate->setToolTip(QCoreApplication::translate("ToolEditForm", "If checked then automatic calculate!", nullptr));
#endif // QT_CONFIG(tooltip)
        chbxPlungeRate->setText(QCoreApplication::translate("ToolEditForm", "Plunge Rate", nullptr));
        dsbxPlungeRate->setSuffix(QCoreApplication::translate("ToolEditForm", " mm/sec", nullptr));
        pbApply->setText(QCoreApplication::translate("ToolEditForm", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToolEditForm: public Ui_ToolEditForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLEDITFORM_H
