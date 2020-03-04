/********************************************************************************
** Form generated from reading UI file 'drillform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRILLFORM_H
#define UI_DRILLFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "forms/depthform.h"

QT_BEGIN_NAMESPACE

class Ui_DrillForm
{
public:
    QGridLayout *gridLayout;
    QPushButton *pbClose;
    QComboBox *cbxFile;
    QGroupBox *grbxDirection;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbClimb;
    QRadioButton *rbConventional;
    QTableView *toolTable;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *rb_drilling;
    QRadioButton *rb_pocket;
    QRadioButton *rb_profile;
    QGroupBox *grbxSide;
    QVBoxLayout *verticalLayout;
    QRadioButton *rb_on;
    QRadioButton *rb_in;
    QRadioButton *rb_out;
    QCheckBox *chbxZoomToSelected;
    QLabel *label_2;
    QPushButton *pbCreate;
    QLabel *label_3;
    DepthForm *dsbxDepth;
    QFrame *line;

    void setupUi(QWidget *DrillForm)
    {
        if (DrillForm->objectName().isEmpty())
            DrillForm->setObjectName(QString::fromUtf8("DrillForm"));
        DrillForm->resize(250, 392);
        DrillForm->setMinimumSize(QSize(250, 0));
        gridLayout = new QGridLayout(DrillForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        pbClose = new QPushButton(DrillForm);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));

        gridLayout->addWidget(pbClose, 10, 0, 1, 2);

        cbxFile = new QComboBox(DrillForm);
        cbxFile->setObjectName(QString::fromUtf8("cbxFile"));
        cbxFile->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout->addWidget(cbxFile, 3, 1, 1, 1);

        grbxDirection = new QGroupBox(DrillForm);
        grbxDirection->setObjectName(QString::fromUtf8("grbxDirection"));
        horizontalLayout = new QHBoxLayout(grbxDirection);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        rbClimb = new QRadioButton(grbxDirection);
        rbClimb->setObjectName(QString::fromUtf8("rbClimb"));
        rbClimb->setChecked(true);

        horizontalLayout->addWidget(rbClimb);

        rbConventional = new QRadioButton(grbxDirection);
        rbConventional->setObjectName(QString::fromUtf8("rbConventional"));

        horizontalLayout->addWidget(rbConventional);


        gridLayout->addWidget(grbxDirection, 7, 0, 1, 2);

        toolTable = new QTableView(DrillForm);
        toolTable->setObjectName(QString::fromUtf8("toolTable"));

        gridLayout->addWidget(toolTable, 8, 0, 1, 2);

        frame = new QFrame(DrillForm);
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


        gridLayout->addWidget(frame, 0, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        groupBox = new QGroupBox(DrillForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(6, 6, 6, 6);
        rb_drilling = new QRadioButton(groupBox);
        rb_drilling->setObjectName(QString::fromUtf8("rb_drilling"));

        verticalLayout_4->addWidget(rb_drilling);

        rb_pocket = new QRadioButton(groupBox);
        rb_pocket->setObjectName(QString::fromUtf8("rb_pocket"));

        verticalLayout_4->addWidget(rb_pocket);

        rb_profile = new QRadioButton(groupBox);
        rb_profile->setObjectName(QString::fromUtf8("rb_profile"));

        verticalLayout_4->addWidget(rb_profile);


        horizontalLayout_4->addWidget(groupBox);

        grbxSide = new QGroupBox(DrillForm);
        grbxSide->setObjectName(QString::fromUtf8("grbxSide"));
        verticalLayout = new QVBoxLayout(grbxSide);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        rb_on = new QRadioButton(grbxSide);
        rb_on->setObjectName(QString::fromUtf8("rb_on"));

        verticalLayout->addWidget(rb_on);

        rb_in = new QRadioButton(grbxSide);
        rb_in->setObjectName(QString::fromUtf8("rb_in"));

        verticalLayout->addWidget(rb_in);

        rb_out = new QRadioButton(grbxSide);
        rb_out->setObjectName(QString::fromUtf8("rb_out"));

        verticalLayout->addWidget(rb_out);


        horizontalLayout_4->addWidget(grbxSide);


        gridLayout->addLayout(horizontalLayout_4, 6, 0, 1, 2);

        chbxZoomToSelected = new QCheckBox(DrillForm);
        chbxZoomToSelected->setObjectName(QString::fromUtf8("chbxZoomToSelected"));

        gridLayout->addWidget(chbxZoomToSelected, 5, 0, 1, 2);

        label_2 = new QLabel(DrillForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        pbCreate = new QPushButton(DrillForm);
        pbCreate->setObjectName(QString::fromUtf8("pbCreate"));

        gridLayout->addWidget(pbCreate, 9, 0, 1, 2);

        label_3 = new QLabel(DrillForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        dsbxDepth = new DepthForm(DrillForm);
        dsbxDepth->setObjectName(QString::fromUtf8("dsbxDepth"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dsbxDepth->sizePolicy().hasHeightForWidth());
        dsbxDepth->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(dsbxDepth, 2, 1, 1, 1);

        line = new QFrame(DrillForm);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);


        retranslateUi(DrillForm);

        QMetaObject::connectSlotsByName(DrillForm);
    } // setupUi

    void retranslateUi(QWidget *DrillForm)
    {
        DrillForm->setWindowTitle(QCoreApplication::translate("DrillForm", "Form", nullptr));
        pbClose->setText(QCoreApplication::translate("DrillForm", "Close", nullptr));
        grbxDirection->setTitle(QCoreApplication::translate("DrillForm", "Direction", nullptr));
        rbClimb->setText(QCoreApplication::translate("DrillForm", "Climb", nullptr));
        rbConventional->setText(QCoreApplication::translate("DrillForm", "Conventional", nullptr));
        label->setText(QCoreApplication::translate("DrillForm", "Drill Toolpath", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DrillForm", "Work Type", nullptr));
        rb_drilling->setText(QCoreApplication::translate("DrillForm", "Only drilling", nullptr));
        rb_pocket->setText(QCoreApplication::translate("DrillForm", "Pocket", nullptr));
        rb_profile->setText(QCoreApplication::translate("DrillForm", "Profile", nullptr));
        grbxSide->setTitle(QCoreApplication::translate("DrillForm", "Side", nullptr));
        rb_on->setText(QCoreApplication::translate("DrillForm", "On", nullptr));
        rb_in->setText(QCoreApplication::translate("DrillForm", "In", nullptr));
        rb_out->setText(QCoreApplication::translate("DrillForm", "Out", nullptr));
        chbxZoomToSelected->setText(QCoreApplication::translate("DrillForm", "Zoom To Selected", nullptr));
        label_2->setText(QCoreApplication::translate("DrillForm", "Depth:", nullptr));
        pbCreate->setText(QCoreApplication::translate("DrillForm", "Create", nullptr));
        label_3->setText(QCoreApplication::translate("DrillForm", "File:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DrillForm: public Ui_DrillForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRILLFORM_H
