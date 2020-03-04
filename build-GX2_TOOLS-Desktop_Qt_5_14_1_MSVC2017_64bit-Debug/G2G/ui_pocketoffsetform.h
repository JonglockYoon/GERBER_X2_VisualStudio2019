/********************************************************************************
** Form generated from reading UI file 'pocketoffsetform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POCKETOFFSETFORM_H
#define UI_POCKETOFFSETFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "doublespinbox.h"
#include "forms/depthform.h"
#include "forms/toolname.h"

QT_BEGIN_NAMESPACE

class Ui_PocketOffsetForm
{
public:
    QGridLayout *gridLayout_2;
    QLabel *labelMinArea;
    DepthForm *dsbxDepth;
    QLabel *label_3;
    QFrame *line_3;
    ToolName *toolName;
    QFrame *line_2;
    QPushButton *pbCreate;
    QCheckBox *chbxUseTwoTools;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbSelect;
    QPushButton *pbEdit;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbSelect_2;
    QPushButton *pbEdit_2;
    QSpinBox *sbxSteps;
    QLineEdit *leName;
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
    QSpacerItem *verticalSpacer;
    QLabel *labelSteps;
    QLabel *label_6;
    QLabel *labelToolName2;
    QPushButton *pbClose;
    ToolName *toolName_2;
    DoubleSpinBox *dsbxMinArea;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;

    void setupUi(QWidget *PocketOffsetForm)
    {
        if (PocketOffsetForm->objectName().isEmpty())
            PocketOffsetForm->setObjectName(QString::fromUtf8("PocketOffsetForm"));
        PocketOffsetForm->resize(250, 500);
        PocketOffsetForm->setMinimumSize(QSize(250, 0));
        gridLayout_2 = new QGridLayout(PocketOffsetForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(3, 3, 3, 3);
        labelMinArea = new QLabel(PocketOffsetForm);
        labelMinArea->setObjectName(QString::fromUtf8("labelMinArea"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        labelMinArea->setFont(font);
        labelMinArea->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelMinArea, 10, 0, 1, 1);

        dsbxDepth = new DepthForm(PocketOffsetForm);
        dsbxDepth->setObjectName(QString::fromUtf8("dsbxDepth"));
        dsbxDepth->setEnabled(true);

        gridLayout_2->addWidget(dsbxDepth, 1, 1, 1, 1);

        label_3 = new QLabel(PocketOffsetForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        line_3 = new QFrame(PocketOffsetForm);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::HLine);

        gridLayout_2->addWidget(line_3, 7, 0, 1, 2);

        toolName = new ToolName(PocketOffsetForm);
        toolName->setObjectName(QString::fromUtf8("toolName"));

        gridLayout_2->addWidget(toolName, 2, 1, 1, 1);

        line_2 = new QFrame(PocketOffsetForm);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setEnabled(true);
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::HLine);

        gridLayout_2->addWidget(line_2, 11, 0, 1, 2);

        pbCreate = new QPushButton(PocketOffsetForm);
        pbCreate->setObjectName(QString::fromUtf8("pbCreate"));
        pbCreate->setEnabled(true);

        gridLayout_2->addWidget(pbCreate, 13, 0, 1, 2);

        chbxUseTwoTools = new QCheckBox(PocketOffsetForm);
        chbxUseTwoTools->setObjectName(QString::fromUtf8("chbxUseTwoTools"));
        chbxUseTwoTools->setEnabled(true);
        chbxUseTwoTools->setFont(font1);

        gridLayout_2->addWidget(chbxUseTwoTools, 4, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbSelect = new QPushButton(PocketOffsetForm);
        pbSelect->setObjectName(QString::fromUtf8("pbSelect"));
        pbSelect->setEnabled(true);

        horizontalLayout->addWidget(pbSelect);

        pbEdit = new QPushButton(PocketOffsetForm);
        pbEdit->setObjectName(QString::fromUtf8("pbEdit"));
        pbEdit->setEnabled(true);

        horizontalLayout->addWidget(pbEdit);


        gridLayout_2->addLayout(horizontalLayout, 3, 1, 1, 1);

        label_2 = new QLabel(PocketOffsetForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbSelect_2 = new QPushButton(PocketOffsetForm);
        pbSelect_2->setObjectName(QString::fromUtf8("pbSelect_2"));
        pbSelect_2->setEnabled(true);

        horizontalLayout_2->addWidget(pbSelect_2);

        pbEdit_2 = new QPushButton(PocketOffsetForm);
        pbEdit_2->setObjectName(QString::fromUtf8("pbEdit_2"));
        pbEdit_2->setEnabled(true);

        horizontalLayout_2->addWidget(pbEdit_2);


        gridLayout_2->addLayout(horizontalLayout_2, 6, 1, 1, 1);

        sbxSteps = new QSpinBox(PocketOffsetForm);
        sbxSteps->setObjectName(QString::fromUtf8("sbxSteps"));
        sbxSteps->setEnabled(true);

        gridLayout_2->addWidget(sbxSteps, 9, 1, 1, 1);

        leName = new QLineEdit(PocketOffsetForm);
        leName->setObjectName(QString::fromUtf8("leName"));
        leName->setEnabled(true);

        gridLayout_2->addWidget(leName, 12, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_4 = new QGroupBox(PocketOffsetForm);
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

        groupBox_2 = new QGroupBox(PocketOffsetForm);
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

        lblPixmap = new QLabel(PocketOffsetForm);
        lblPixmap->setObjectName(QString::fromUtf8("lblPixmap"));
        lblPixmap->setEnabled(true);
        lblPixmap->setMinimumSize(QSize(75, 75));
        lblPixmap->setPixmap(QPixmap(QString::fromUtf8(":/toolpath/offset_climb.png")));
        lblPixmap->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblPixmap, 1, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 8, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 15, 0, 1, 1);

        labelSteps = new QLabel(PocketOffsetForm);
        labelSteps->setObjectName(QString::fromUtf8("labelSteps"));
        labelSteps->setEnabled(true);
        labelSteps->setFont(font1);
        labelSteps->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelSteps, 9, 0, 1, 1);

        label_6 = new QLabel(PocketOffsetForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setEnabled(true);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 12, 0, 1, 1);

        labelToolName2 = new QLabel(PocketOffsetForm);
        labelToolName2->setObjectName(QString::fromUtf8("labelToolName2"));
        labelToolName2->setEnabled(true);
        sizePolicy.setHeightForWidth(labelToolName2->sizePolicy().hasHeightForWidth());
        labelToolName2->setSizePolicy(sizePolicy);
        labelToolName2->setFont(font1);
        labelToolName2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelToolName2, 5, 0, 1, 1);

        pbClose = new QPushButton(PocketOffsetForm);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        pbClose->setEnabled(true);

        gridLayout_2->addWidget(pbClose, 14, 0, 1, 2);

        toolName_2 = new ToolName(PocketOffsetForm);
        toolName_2->setObjectName(QString::fromUtf8("toolName_2"));

        gridLayout_2->addWidget(toolName_2, 5, 1, 1, 1);

        dsbxMinArea = new DoubleSpinBox(PocketOffsetForm);
        dsbxMinArea->setObjectName(QString::fromUtf8("dsbxMinArea"));
        dsbxMinArea->setDecimals(3);
        dsbxMinArea->setMaximum(100.000000000000000);
        dsbxMinArea->setSingleStep(0.005000000000000);

        gridLayout_2->addWidget(dsbxMinArea, 10, 1, 1, 1);

        frame = new QFrame(PocketOffsetForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setFont(font1);

        verticalLayout_2->addWidget(label);


        gridLayout_2->addWidget(frame, 0, 0, 1, 2);


        retranslateUi(PocketOffsetForm);

        QMetaObject::connectSlotsByName(PocketOffsetForm);
    } // setupUi

    void retranslateUi(QWidget *PocketOffsetForm)
    {
        PocketOffsetForm->setWindowTitle(QCoreApplication::translate("PocketOffsetForm", "Form", nullptr));
        labelMinArea->setText(QCoreApplication::translate("PocketOffsetForm", "Min T1\n"
"Area:", nullptr));
        label_3->setText(QCoreApplication::translate("PocketOffsetForm", "Tool:", nullptr));
        pbCreate->setText(QCoreApplication::translate("PocketOffsetForm", "Create", nullptr));
        chbxUseTwoTools->setText(QCoreApplication::translate("PocketOffsetForm", "Use Larger area clearance tool", nullptr));
        pbSelect->setText(QCoreApplication::translate("PocketOffsetForm", "Select", nullptr));
        pbEdit->setText(QCoreApplication::translate("PocketOffsetForm", "Edit", nullptr));
        label_2->setText(QCoreApplication::translate("PocketOffsetForm", "Depth:", nullptr));
        pbSelect_2->setText(QCoreApplication::translate("PocketOffsetForm", "Select", nullptr));
        pbEdit_2->setText(QCoreApplication::translate("PocketOffsetForm", "Edit", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("PocketOffsetForm", "Aligin", nullptr));
        rbOutside->setText(QCoreApplication::translate("PocketOffsetForm", "Outside", nullptr));
        rbInside->setText(QCoreApplication::translate("PocketOffsetForm", "Inside", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PocketOffsetForm", "Direction", nullptr));
        rbClimb->setText(QCoreApplication::translate("PocketOffsetForm", "Climb", nullptr));
        rbConventional->setText(QCoreApplication::translate("PocketOffsetForm", "Conventional", nullptr));
        lblPixmap->setText(QString());
        labelSteps->setText(QCoreApplication::translate("PocketOffsetForm", "Steps:", nullptr));
        label_6->setText(QCoreApplication::translate("PocketOffsetForm", "Name:", nullptr));
        labelToolName2->setText(QCoreApplication::translate("PocketOffsetForm", "Tool2:", nullptr));
        pbClose->setText(QCoreApplication::translate("PocketOffsetForm", "Close", nullptr));
        dsbxMinArea->setSuffix(QCoreApplication::translate("PocketOffsetForm", " mm\302\262", nullptr));
        label->setText(QCoreApplication::translate("PocketOffsetForm", "Pocket Toolpath", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PocketOffsetForm: public Ui_PocketOffsetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POCKETOFFSETFORM_H
