/********************************************************************************
** Form generated from reading UI file 'gcodepropertiesform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GCODEPROPERTIESFORM_H
#define UI_GCODEPROPERTIESFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "doublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_GCodePropertiesForm
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_2;
    QLabel *thicknessLabel;
    DoubleSpinBox *dsbxThickness;
    QLabel *label_3;
    DoubleSpinBox *dsbxCopperThickness;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_4;
    QLabel *clearenceLabel;
    DoubleSpinBox *dsbxClearence;
    QLabel *plungeLabel;
    DoubleSpinBox *dsbxPlunge;
    QLabel *label_6;
    DoubleSpinBox *dsbxSafeZ;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_3;
    QLabel *homeXLabel;
    DoubleSpinBox *dsbxHomeX;
    QLabel *homeYLabel;
    DoubleSpinBox *dsbxHomeY;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *zeroXLabel;
    DoubleSpinBox *dsbxZeroX;
    QLabel *zeroYLabel;
    DoubleSpinBox *dsbxZeroY;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout_5;
    QLabel *zeroXLabel_2;
    QLabel *zeroYLabel_2;
    DoubleSpinBox *dsbxSpasingY;
    DoubleSpinBox *dsbxSpasingX;
    QSpinBox *sbxStepsY;
    QSpinBox *sbxStepsX;
    QLabel *label_2;
    QLabel *label_4;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *glueLabel;
    DoubleSpinBox *dsbxGlue;
    QPushButton *pbOk;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GCodePropertiesForm)
    {
        if (GCodePropertiesForm->objectName().isEmpty())
            GCodePropertiesForm->setObjectName(QString::fromUtf8("GCodePropertiesForm"));
        GCodePropertiesForm->resize(250, 582);
        GCodePropertiesForm->setMinimumSize(QSize(250, 0));
        verticalLayout = new QVBoxLayout(GCodePropertiesForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        frame = new QFrame(GCodePropertiesForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);
        frame->setMidLineWidth(0);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_3->addWidget(label);


        verticalLayout->addWidget(frame);

        groupBox_4 = new QGroupBox(GCodePropertiesForm);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        formLayout_2 = new QFormLayout(groupBox_4);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setContentsMargins(6, 6, 6, 6);
        thicknessLabel = new QLabel(groupBox_4);
        thicknessLabel->setObjectName(QString::fromUtf8("thicknessLabel"));
        thicknessLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, thicknessLabel);

        dsbxThickness = new DoubleSpinBox(groupBox_4);
        dsbxThickness->setObjectName(QString::fromUtf8("dsbxThickness"));
        dsbxThickness->setDecimals(3);
        dsbxThickness->setMaximum(100.000000000000000);
        dsbxThickness->setSingleStep(0.100000000000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, dsbxThickness);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        dsbxCopperThickness = new DoubleSpinBox(groupBox_4);
        dsbxCopperThickness->setObjectName(QString::fromUtf8("dsbxCopperThickness"));
        dsbxCopperThickness->setDecimals(3);
        dsbxCopperThickness->setMaximum(1.000000000000000);
        dsbxCopperThickness->setSingleStep(0.001000000000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, dsbxCopperThickness);


        verticalLayout->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(GCodePropertiesForm);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        formLayout_4 = new QFormLayout(groupBox_3);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_4->setContentsMargins(6, 6, 6, 6);
        clearenceLabel = new QLabel(groupBox_3);
        clearenceLabel->setObjectName(QString::fromUtf8("clearenceLabel"));
        clearenceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, clearenceLabel);

        dsbxClearence = new DoubleSpinBox(groupBox_3);
        dsbxClearence->setObjectName(QString::fromUtf8("dsbxClearence"));
        dsbxClearence->setDecimals(3);
        dsbxClearence->setMaximum(100.000000000000000);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, dsbxClearence);

        plungeLabel = new QLabel(groupBox_3);
        plungeLabel->setObjectName(QString::fromUtf8("plungeLabel"));
        plungeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, plungeLabel);

        dsbxPlunge = new DoubleSpinBox(groupBox_3);
        dsbxPlunge->setObjectName(QString::fromUtf8("dsbxPlunge"));
        dsbxPlunge->setDecimals(3);
        dsbxPlunge->setMaximum(100.000000000000000);
        dsbxPlunge->setSingleStep(0.100000000000000);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, dsbxPlunge);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_6);

        dsbxSafeZ = new DoubleSpinBox(groupBox_3);
        dsbxSafeZ->setObjectName(QString::fromUtf8("dsbxSafeZ"));
        dsbxSafeZ->setDecimals(3);
        dsbxSafeZ->setMinimum(5.000000000000000);
        dsbxSafeZ->setMaximum(1000.000000000000000);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, dsbxSafeZ);


        verticalLayout->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(GCodePropertiesForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_3 = new QFormLayout(groupBox_2);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(6, 6, 6, 6);
        homeXLabel = new QLabel(groupBox_2);
        homeXLabel->setObjectName(QString::fromUtf8("homeXLabel"));
        homeXLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, homeXLabel);

        dsbxHomeX = new DoubleSpinBox(groupBox_2);
        dsbxHomeX->setObjectName(QString::fromUtf8("dsbxHomeX"));
        dsbxHomeX->setDecimals(3);
        dsbxHomeX->setMinimum(-1000.000000000000000);
        dsbxHomeX->setMaximum(1000.000000000000000);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, dsbxHomeX);

        homeYLabel = new QLabel(groupBox_2);
        homeYLabel->setObjectName(QString::fromUtf8("homeYLabel"));
        homeYLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, homeYLabel);

        dsbxHomeY = new DoubleSpinBox(groupBox_2);
        dsbxHomeY->setObjectName(QString::fromUtf8("dsbxHomeY"));
        dsbxHomeY->setDecimals(3);
        dsbxHomeY->setMinimum(-1000.000000000000000);
        dsbxHomeY->setMaximum(1000.000000000000000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, dsbxHomeY);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(GCodePropertiesForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(6, 6, 6, 6);
        zeroXLabel = new QLabel(groupBox);
        zeroXLabel->setObjectName(QString::fromUtf8("zeroXLabel"));
        zeroXLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, zeroXLabel);

        dsbxZeroX = new DoubleSpinBox(groupBox);
        dsbxZeroX->setObjectName(QString::fromUtf8("dsbxZeroX"));
        dsbxZeroX->setDecimals(3);
        dsbxZeroX->setMinimum(-1000.000000000000000);
        dsbxZeroX->setMaximum(1000.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, dsbxZeroX);

        zeroYLabel = new QLabel(groupBox);
        zeroYLabel->setObjectName(QString::fromUtf8("zeroYLabel"));
        zeroYLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, zeroYLabel);

        dsbxZeroY = new DoubleSpinBox(groupBox);
        dsbxZeroY->setObjectName(QString::fromUtf8("dsbxZeroY"));
        dsbxZeroY->setDecimals(3);
        dsbxZeroY->setMinimum(-1000.000000000000000);
        dsbxZeroY->setMaximum(1000.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, dsbxZeroY);


        verticalLayout->addWidget(groupBox);

        groupBox_5 = new QGroupBox(GCodePropertiesForm);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setEnabled(true);
        formLayout_5 = new QFormLayout(groupBox_5);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_5->setContentsMargins(6, 6, 6, 6);
        zeroXLabel_2 = new QLabel(groupBox_5);
        zeroXLabel_2->setObjectName(QString::fromUtf8("zeroXLabel_2"));
        zeroXLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_5->setWidget(2, QFormLayout::LabelRole, zeroXLabel_2);

        zeroYLabel_2 = new QLabel(groupBox_5);
        zeroYLabel_2->setObjectName(QString::fromUtf8("zeroYLabel_2"));
        zeroYLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_5->setWidget(3, QFormLayout::LabelRole, zeroYLabel_2);

        dsbxSpasingY = new DoubleSpinBox(groupBox_5);
        dsbxSpasingY->setObjectName(QString::fromUtf8("dsbxSpasingY"));
        dsbxSpasingY->setDecimals(3);
        dsbxSpasingY->setMinimum(0.000000000000000);
        dsbxSpasingY->setMaximum(100.000000000000000);
        dsbxSpasingY->setStepType(QAbstractSpinBox::DefaultStepType);

        formLayout_5->setWidget(3, QFormLayout::FieldRole, dsbxSpasingY);

        dsbxSpasingX = new DoubleSpinBox(groupBox_5);
        dsbxSpasingX->setObjectName(QString::fromUtf8("dsbxSpasingX"));
        dsbxSpasingX->setDecimals(3);
        dsbxSpasingX->setMinimum(0.000000000000000);
        dsbxSpasingX->setMaximum(100.000000000000000);
        dsbxSpasingX->setStepType(QAbstractSpinBox::DefaultStepType);

        formLayout_5->setWidget(2, QFormLayout::FieldRole, dsbxSpasingX);

        sbxStepsY = new QSpinBox(groupBox_5);
        sbxStepsY->setObjectName(QString::fromUtf8("sbxStepsY"));
        sbxStepsY->setMinimum(1);
        sbxStepsY->setMaximum(100);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, sbxStepsY);

        sbxStepsX = new QSpinBox(groupBox_5);
        sbxStepsX->setObjectName(QString::fromUtf8("sbxStepsX"));
        sbxStepsX->setMinimum(1);
        sbxStepsX->setMaximum(100);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, sbxStepsX);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_2);

        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_4);


        verticalLayout->addWidget(groupBox_5);

        frame_2 = new QFrame(GCodePropertiesForm);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(6, 6, 6, 6);
        glueLabel = new QLabel(frame_2);
        glueLabel->setObjectName(QString::fromUtf8("glueLabel"));
        glueLabel->setFont(font);
        glueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(glueLabel);

        dsbxGlue = new DoubleSpinBox(frame_2);
        dsbxGlue->setObjectName(QString::fromUtf8("dsbxGlue"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dsbxGlue->sizePolicy().hasHeightForWidth());
        dsbxGlue->setSizePolicy(sizePolicy1);
        dsbxGlue->setDecimals(3);
        dsbxGlue->setMaximum(1.000000000000000);
        dsbxGlue->setSingleStep(0.005000000000000);
        dsbxGlue->setStepType(QAbstractSpinBox::DefaultStepType);
        dsbxGlue->setValue(0.010000000000000);

        horizontalLayout_2->addWidget(dsbxGlue);


        verticalLayout->addWidget(frame_2);

        pbOk = new QPushButton(GCodePropertiesForm);
        pbOk->setObjectName(QString::fromUtf8("pbOk"));

        verticalLayout->addWidget(pbOk);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(GCodePropertiesForm);

        QMetaObject::connectSlotsByName(GCodePropertiesForm);
    } // setupUi

    void retranslateUi(QWidget *GCodePropertiesForm)
    {
        GCodePropertiesForm->setWindowTitle(QCoreApplication::translate("GCodePropertiesForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("GCodePropertiesForm", "G-Code Properties", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("GCodePropertiesForm", "Material", nullptr));
        thicknessLabel->setText(QCoreApplication::translate("GCodePropertiesForm", "Board Thickness", nullptr));
        dsbxThickness->setSuffix(QCoreApplication::translate("GCodePropertiesForm", " mm", nullptr));
        label_3->setText(QCoreApplication::translate("GCodePropertiesForm", "Copper Thickness", nullptr));
        dsbxCopperThickness->setSuffix(QCoreApplication::translate("GCodePropertiesForm", " mm", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("GCodePropertiesForm", "G0 Properties", nullptr));
        clearenceLabel->setText(QCoreApplication::translate("GCodePropertiesForm", "Clearence Z", nullptr));
        dsbxClearence->setSuffix(QCoreApplication::translate("GCodePropertiesForm", " mm", nullptr));
        plungeLabel->setText(QCoreApplication::translate("GCodePropertiesForm", "Plunge Z", nullptr));
        dsbxPlunge->setSuffix(QCoreApplication::translate("GCodePropertiesForm", " mm", nullptr));
        label_6->setText(QCoreApplication::translate("GCodePropertiesForm", "Safe Z", nullptr));
        dsbxSafeZ->setSuffix(QCoreApplication::translate("GCodePropertiesForm", " mm", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GCodePropertiesForm", "Home Position", nullptr));
        homeXLabel->setText(QCoreApplication::translate("GCodePropertiesForm", "X", nullptr));
        dsbxHomeX->setSuffix(QCoreApplication::translate("GCodePropertiesForm", " mm", nullptr));
        homeYLabel->setText(QCoreApplication::translate("GCodePropertiesForm", "Y", nullptr));
        dsbxHomeY->setSuffix(QCoreApplication::translate("GCodePropertiesForm", " mm", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GCodePropertiesForm", "Zero Position", nullptr));
        zeroXLabel->setText(QCoreApplication::translate("GCodePropertiesForm", "X", nullptr));
        dsbxZeroX->setSuffix(QCoreApplication::translate("GCodePropertiesForm", " mm", nullptr));
        zeroYLabel->setText(QCoreApplication::translate("GCodePropertiesForm", "Y", nullptr));
        dsbxZeroY->setSuffix(QCoreApplication::translate("GCodePropertiesForm", " mm", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("GCodePropertiesForm", "Layout", nullptr));
        zeroXLabel_2->setText(QCoreApplication::translate("GCodePropertiesForm", "X", nullptr));
        zeroYLabel_2->setText(QCoreApplication::translate("GCodePropertiesForm", "Y", nullptr));
        dsbxSpasingY->setSuffix(QCoreApplication::translate("GCodePropertiesForm", " mm", nullptr));
        dsbxSpasingX->setSuffix(QCoreApplication::translate("GCodePropertiesForm", " mm", nullptr));
        label_2->setText(QCoreApplication::translate("GCodePropertiesForm", "X Steps", nullptr));
        label_4->setText(QCoreApplication::translate("GCodePropertiesForm", "Y Steps", nullptr));
        glueLabel->setText(QCoreApplication::translate("GCodePropertiesForm", "Glue (for Aperture paths)", nullptr));
        dsbxGlue->setSuffix(QCoreApplication::translate("GCodePropertiesForm", " mm", nullptr));
        pbOk->setText(QCoreApplication::translate("GCodePropertiesForm", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GCodePropertiesForm: public Ui_GCodePropertiesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GCODEPROPERTIESFORM_H
