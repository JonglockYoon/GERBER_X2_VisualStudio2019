/********************************************************************************
** Form generated from reading UI file 'pocketrasterform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POCKETRASTERFORM_H
#define UI_POCKETRASTERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "doublespinbox.h"
#include "forms/depthform.h"
#include "forms/toolname.h"

QT_BEGIN_NAMESPACE

class Ui_PocketRasterForm
{
public:
    QFormLayout *formLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    DepthForm *dsbxDepth;
    QLabel *label_3;
    ToolName *toolName;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbSelect;
    QPushButton *pbEdit;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *rbOutside;
    QRadioButton *rbInside;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *rbClimb;
    QRadioButton *rbConventional;
    QLabel *lblPixmap;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *rbNormal;
    QRadioButton *rbFast;
    QFrame *line_3;
    QFormLayout *formLayout_2;
    QLabel *labelAngle;
    QLabel *labelPass;
    QLabel *labelAcc;
    DoubleSpinBox *dsbxAngle;
    QComboBox *cbxPass;
    DoubleSpinBox *dsbxAcc;
    QFrame *line_2;
    QLineEdit *leName;
    QLabel *label_6;
    QPushButton *pbCreate;
    QPushButton *pbClose;

    void setupUi(QWidget *PocketRasterForm)
    {
        if (PocketRasterForm->objectName().isEmpty())
            PocketRasterForm->setObjectName(QString::fromUtf8("PocketRasterForm"));
        PocketRasterForm->resize(219, 455);
        formLayout = new QFormLayout(PocketRasterForm);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(3, 3, 3, 3);
        frame = new QFrame(PocketRasterForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_2->addWidget(label);


        formLayout->setWidget(0, QFormLayout::SpanningRole, frame);

        label_2 = new QLabel(PocketRasterForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        dsbxDepth = new DepthForm(PocketRasterForm);
        dsbxDepth->setObjectName(QString::fromUtf8("dsbxDepth"));
        dsbxDepth->setEnabled(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, dsbxDepth);

        label_3 = new QLabel(PocketRasterForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        toolName = new ToolName(PocketRasterForm);
        toolName->setObjectName(QString::fromUtf8("toolName"));

        formLayout->setWidget(2, QFormLayout::FieldRole, toolName);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbSelect = new QPushButton(PocketRasterForm);
        pbSelect->setObjectName(QString::fromUtf8("pbSelect"));
        pbSelect->setEnabled(true);

        horizontalLayout->addWidget(pbSelect);

        pbEdit = new QPushButton(PocketRasterForm);
        pbEdit->setObjectName(QString::fromUtf8("pbEdit"));
        pbEdit->setEnabled(true);

        horizontalLayout->addWidget(pbEdit);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_4 = new QGroupBox(PocketRasterForm);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setEnabled(true);
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(6, 9, 6, 6);
        rbOutside = new QRadioButton(groupBox_4);
        rbOutside->setObjectName(QString::fromUtf8("rbOutside"));
        rbOutside->setEnabled(true);
        rbOutside->setChecked(true);

        verticalLayout_5->addWidget(rbOutside);

        rbInside = new QRadioButton(groupBox_4);
        rbInside->setObjectName(QString::fromUtf8("rbInside"));
        rbInside->setEnabled(true);

        verticalLayout_5->addWidget(rbInside);


        gridLayout->addWidget(groupBox_4, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(PocketRasterForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setEnabled(true);
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(6, 9, 6, 6);
        rbClimb = new QRadioButton(groupBox_2);
        rbClimb->setObjectName(QString::fromUtf8("rbClimb"));
        rbClimb->setEnabled(true);
        rbClimb->setChecked(true);

        verticalLayout_4->addWidget(rbClimb);

        rbConventional = new QRadioButton(groupBox_2);
        rbConventional->setObjectName(QString::fromUtf8("rbConventional"));
        rbConventional->setEnabled(true);

        verticalLayout_4->addWidget(rbConventional);


        gridLayout->addWidget(groupBox_2, 2, 1, 1, 1);

        lblPixmap = new QLabel(PocketRasterForm);
        lblPixmap->setObjectName(QString::fromUtf8("lblPixmap"));
        lblPixmap->setEnabled(true);
        lblPixmap->setMinimumSize(QSize(75, 75));
        lblPixmap->setPixmap(QPixmap(QString::fromUtf8(":/toolpath/offset_climb.png")));
        lblPixmap->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblPixmap, 1, 1, 1, 1);

        groupBox = new QGroupBox(PocketRasterForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rbNormal = new QRadioButton(groupBox);
        rbNormal->setObjectName(QString::fromUtf8("rbNormal"));
        rbNormal->setChecked(true);

        verticalLayout->addWidget(rbNormal);

        rbFast = new QRadioButton(groupBox);
        rbFast->setObjectName(QString::fromUtf8("rbFast"));

        verticalLayout->addWidget(rbFast);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);


        formLayout->setLayout(4, QFormLayout::SpanningRole, gridLayout);

        line_3 = new QFrame(PocketRasterForm);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::HLine);

        formLayout->setWidget(5, QFormLayout::SpanningRole, line_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        labelAngle = new QLabel(PocketRasterForm);
        labelAngle->setObjectName(QString::fromUtf8("labelAngle"));
        labelAngle->setEnabled(true);
        labelAngle->setFont(font);
        labelAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, labelAngle);

        labelPass = new QLabel(PocketRasterForm);
        labelPass->setObjectName(QString::fromUtf8("labelPass"));
        labelPass->setEnabled(true);
        labelPass->setFont(font);
        labelPass->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, labelPass);

        labelAcc = new QLabel(PocketRasterForm);
        labelAcc->setObjectName(QString::fromUtf8("labelAcc"));
        labelAcc->setFont(font);
        labelAcc->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, labelAcc);

        dsbxAngle = new DoubleSpinBox(PocketRasterForm);
        dsbxAngle->setObjectName(QString::fromUtf8("dsbxAngle"));
        dsbxAngle->setEnabled(true);
        dsbxAngle->setMaximum(180.000000000000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, dsbxAngle);

        cbxPass = new QComboBox(PocketRasterForm);
        cbxPass->addItem(QString());
        cbxPass->addItem(QString());
        cbxPass->addItem(QString());
        cbxPass->setObjectName(QString::fromUtf8("cbxPass"));
        cbxPass->setEnabled(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, cbxPass);

        dsbxAcc = new DoubleSpinBox(PocketRasterForm);
        dsbxAcc->setObjectName(QString::fromUtf8("dsbxAcc"));
        dsbxAcc->setDecimals(0);
        dsbxAcc->setMinimum(1.000000000000000);
        dsbxAcc->setMaximum(10000.000000000000000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, dsbxAcc);


        formLayout->setLayout(6, QFormLayout::SpanningRole, formLayout_2);

        line_2 = new QFrame(PocketRasterForm);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setEnabled(true);
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::HLine);

        formLayout->setWidget(7, QFormLayout::SpanningRole, line_2);

        leName = new QLineEdit(PocketRasterForm);
        leName->setObjectName(QString::fromUtf8("leName"));
        leName->setEnabled(true);

        formLayout->setWidget(8, QFormLayout::FieldRole, leName);

        label_6 = new QLabel(PocketRasterForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setEnabled(true);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_6);

        pbCreate = new QPushButton(PocketRasterForm);
        pbCreate->setObjectName(QString::fromUtf8("pbCreate"));
        pbCreate->setEnabled(true);

        formLayout->setWidget(9, QFormLayout::SpanningRole, pbCreate);

        pbClose = new QPushButton(PocketRasterForm);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        pbClose->setEnabled(true);

        formLayout->setWidget(10, QFormLayout::SpanningRole, pbClose);


        retranslateUi(PocketRasterForm);

        QMetaObject::connectSlotsByName(PocketRasterForm);
    } // setupUi

    void retranslateUi(QWidget *PocketRasterForm)
    {
        PocketRasterForm->setWindowTitle(QCoreApplication::translate("PocketRasterForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("PocketRasterForm", "Pocket Toolpath", nullptr));
        label_2->setText(QCoreApplication::translate("PocketRasterForm", "Depth:", nullptr));
        label_3->setText(QCoreApplication::translate("PocketRasterForm", "Tool:", nullptr));
        pbSelect->setText(QCoreApplication::translate("PocketRasterForm", "Select", nullptr));
        pbEdit->setText(QCoreApplication::translate("PocketRasterForm", "Edit", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("PocketRasterForm", "Aligin", nullptr));
        rbOutside->setText(QCoreApplication::translate("PocketRasterForm", "Outside", nullptr));
        rbInside->setText(QCoreApplication::translate("PocketRasterForm", "Inside", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PocketRasterForm", "Direction", nullptr));
        rbClimb->setText(QCoreApplication::translate("PocketRasterForm", "Climb", nullptr));
        rbConventional->setText(QCoreApplication::translate("PocketRasterForm", "Conventional", nullptr));
        lblPixmap->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("PocketRasterForm", "Type", nullptr));
        rbNormal->setText(QCoreApplication::translate("PocketRasterForm", "Milling", nullptr));
        rbFast->setText(QCoreApplication::translate("PocketRasterForm", "HLDI", nullptr));
        labelAngle->setText(QCoreApplication::translate("PocketRasterForm", "Raster Angle:", nullptr));
        labelPass->setText(QCoreApplication::translate("PocketRasterForm", "Profile Pass:", nullptr));
        labelAcc->setText(QCoreApplication::translate("PocketRasterForm", "Acceleration:", nullptr));
        dsbxAngle->setSuffix(QCoreApplication::translate("PocketRasterForm", " \302\260", nullptr));
        cbxPass->setItemText(0, QCoreApplication::translate("PocketRasterForm", "No Profile Pass", nullptr));
        cbxPass->setItemText(1, QCoreApplication::translate("PocketRasterForm", "First", nullptr));
        cbxPass->setItemText(2, QCoreApplication::translate("PocketRasterForm", "Last", nullptr));

        dsbxAcc->setSuffix(QCoreApplication::translate("PocketRasterForm", " mm/c\302\262", nullptr));
        label_6->setText(QCoreApplication::translate("PocketRasterForm", "Name:", nullptr));
        pbCreate->setText(QCoreApplication::translate("PocketRasterForm", "Create", nullptr));
        pbClose->setText(QCoreApplication::translate("PocketRasterForm", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PocketRasterForm: public Ui_PocketRasterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POCKETRASTERFORM_H
