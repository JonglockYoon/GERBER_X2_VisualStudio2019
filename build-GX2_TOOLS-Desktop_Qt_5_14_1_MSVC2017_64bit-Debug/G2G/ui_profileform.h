/********************************************************************************
** Form generated from reading UI file 'profileform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEFORM_H
#define UI_PROFILEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
#include "toolname.h"

QT_BEGIN_NAMESPACE

class Ui_ProfileForm
{
public:
    QFormLayout *formLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    DepthForm *dsbxDepth;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbSelect;
    QPushButton *pbEdit;
    QFrame *line;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *rbOutside;
    QRadioButton *rbInside;
    QRadioButton *rbOn;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *rbClimb;
    QRadioButton *rbConventional;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    DoubleSpinBox *dsbxBridgeLenght;
    QPushButton *pbAddBridge;
    QLabel *lblPixmap;
    QFrame *line_2;
    QLabel *label_6;
    QLineEdit *leName;
    QPushButton *pbCreate;
    QPushButton *pbClose;
    ToolName *toolName;

    void setupUi(QWidget *ProfileForm)
    {
        if (ProfileForm->objectName().isEmpty())
            ProfileForm->setObjectName(QString::fromUtf8("ProfileForm"));
        ProfileForm->resize(250, 392);
        ProfileForm->setMinimumSize(QSize(250, 0));
        formLayout = new QFormLayout(ProfileForm);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(3, 3, 3, 3);
        frame = new QFrame(ProfileForm);
        frame->setObjectName(QString::fromUtf8("frame"));
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
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_2->addWidget(label);


        formLayout->setWidget(0, QFormLayout::SpanningRole, frame);

        label_2 = new QLabel(ProfileForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        dsbxDepth = new DepthForm(ProfileForm);
        dsbxDepth->setObjectName(QString::fromUtf8("dsbxDepth"));

        formLayout->setWidget(1, QFormLayout::FieldRole, dsbxDepth);

        label_3 = new QLabel(ProfileForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbSelect = new QPushButton(ProfileForm);
        pbSelect->setObjectName(QString::fromUtf8("pbSelect"));

        horizontalLayout->addWidget(pbSelect);

        pbEdit = new QPushButton(ProfileForm);
        pbEdit->setObjectName(QString::fromUtf8("pbEdit"));

        horizontalLayout->addWidget(pbEdit);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        line = new QFrame(ProfileForm);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        formLayout->setWidget(4, QFormLayout::SpanningRole, line);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(ProfileForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        rbOutside = new QRadioButton(groupBox);
        rbOutside->setObjectName(QString::fromUtf8("rbOutside"));
        rbOutside->setChecked(true);

        verticalLayout_3->addWidget(rbOutside);

        rbInside = new QRadioButton(groupBox);
        rbInside->setObjectName(QString::fromUtf8("rbInside"));

        verticalLayout_3->addWidget(rbInside);

        rbOn = new QRadioButton(groupBox);
        rbOn->setObjectName(QString::fromUtf8("rbOn"));

        verticalLayout_3->addWidget(rbOn);


        gridLayout->addWidget(groupBox, 4, 0, 1, 1);

        groupBox_2 = new QGroupBox(ProfileForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(6, 6, 6, 6);
        rbClimb = new QRadioButton(groupBox_2);
        rbClimb->setObjectName(QString::fromUtf8("rbClimb"));
        rbClimb->setChecked(true);

        verticalLayout_4->addWidget(rbClimb);

        rbConventional = new QRadioButton(groupBox_2);
        rbConventional->setObjectName(QString::fromUtf8("rbConventional"));

        verticalLayout_4->addWidget(rbConventional);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(ProfileForm);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        dsbxBridgeLenght = new DoubleSpinBox(groupBox_3);
        dsbxBridgeLenght->setObjectName(QString::fromUtf8("dsbxBridgeLenght"));
        dsbxBridgeLenght->setDecimals(2);
        dsbxBridgeLenght->setMinimum(0.100000000000000);
        dsbxBridgeLenght->setMaximum(10.000000000000000);
        dsbxBridgeLenght->setSingleStep(0.100000000000000);
        dsbxBridgeLenght->setValue(1.000000000000000);

        verticalLayout->addWidget(dsbxBridgeLenght);

        pbAddBridge = new QPushButton(groupBox_3);
        pbAddBridge->setObjectName(QString::fromUtf8("pbAddBridge"));

        verticalLayout->addWidget(pbAddBridge);


        gridLayout->addWidget(groupBox_3, 4, 1, 1, 1);

        lblPixmap = new QLabel(ProfileForm);
        lblPixmap->setObjectName(QString::fromUtf8("lblPixmap"));
        lblPixmap->setMinimumSize(QSize(75, 75));
        lblPixmap->setPixmap(QPixmap(QString::fromUtf8(":/toolpath/outside_climb.png")));
        lblPixmap->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblPixmap, 1, 1, 1, 1);


        formLayout->setLayout(5, QFormLayout::SpanningRole, gridLayout);

        line_2 = new QFrame(ProfileForm);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::HLine);

        formLayout->setWidget(6, QFormLayout::SpanningRole, line_2);

        label_6 = new QLabel(ProfileForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_6);

        leName = new QLineEdit(ProfileForm);
        leName->setObjectName(QString::fromUtf8("leName"));

        formLayout->setWidget(7, QFormLayout::FieldRole, leName);

        pbCreate = new QPushButton(ProfileForm);
        pbCreate->setObjectName(QString::fromUtf8("pbCreate"));

        formLayout->setWidget(8, QFormLayout::SpanningRole, pbCreate);

        pbClose = new QPushButton(ProfileForm);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));

        formLayout->setWidget(9, QFormLayout::SpanningRole, pbClose);

        toolName = new ToolName(ProfileForm);
        toolName->setObjectName(QString::fromUtf8("toolName"));

        formLayout->setWidget(2, QFormLayout::FieldRole, toolName);


        retranslateUi(ProfileForm);

        QMetaObject::connectSlotsByName(ProfileForm);
    } // setupUi

    void retranslateUi(QWidget *ProfileForm)
    {
        ProfileForm->setWindowTitle(QCoreApplication::translate("ProfileForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("ProfileForm", "Profile Toolpath", nullptr));
        label_2->setText(QCoreApplication::translate("ProfileForm", "Depth:", nullptr));
        label_3->setText(QCoreApplication::translate("ProfileForm", "Tool:", nullptr));
        pbSelect->setText(QCoreApplication::translate("ProfileForm", "Select", nullptr));
        pbEdit->setText(QCoreApplication::translate("ProfileForm", "Edit", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ProfileForm", "Aligin", nullptr));
        rbOutside->setText(QCoreApplication::translate("ProfileForm", "Outside", nullptr));
        rbInside->setText(QCoreApplication::translate("ProfileForm", "Inside", nullptr));
        rbOn->setText(QCoreApplication::translate("ProfileForm", "On", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ProfileForm", "Direction", nullptr));
        rbClimb->setText(QCoreApplication::translate("ProfileForm", "Climb", nullptr));
        rbConventional->setText(QCoreApplication::translate("ProfileForm", "Conventional", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ProfileForm", "Bridges", nullptr));
        label_4->setText(QCoreApplication::translate("ProfileForm", "Lenght:", nullptr));
        dsbxBridgeLenght->setSuffix(QCoreApplication::translate("ProfileForm", " mm", nullptr));
        pbAddBridge->setText(QCoreApplication::translate("ProfileForm", "Add Bridge", nullptr));
        lblPixmap->setText(QString());
        label_6->setText(QCoreApplication::translate("ProfileForm", "Name:", nullptr));
        pbCreate->setText(QCoreApplication::translate("ProfileForm", "Create", nullptr));
        pbClose->setText(QCoreApplication::translate("ProfileForm", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileForm: public Ui_ProfileForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEFORM_H
