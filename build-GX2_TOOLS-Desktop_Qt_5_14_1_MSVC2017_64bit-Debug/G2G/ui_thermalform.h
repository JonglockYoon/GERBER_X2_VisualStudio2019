/********************************************************************************
** Form generated from reading UI file 'thermalform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THERMALFORM_H
#define UI_THERMALFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "forms/depthform.h"
#include "forms/toolname.h"

QT_BEGIN_NAMESPACE

class Ui_ThermalForm
{
public:
    QGridLayout *gridLayout;
    QPushButton *pbExclude;
    QTreeView *treeView;
    QPushButton *pbCreate;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_6;
    QComboBox *cbxFile;
    QLineEdit *leName;
    DepthForm *dsbxDepth;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbSelect;
    QPushButton *pbEdit;
    QPushButton *pbClose;
    QFrame *line;
    QFrame *line_2;
    ToolName *toolName;

    void setupUi(QWidget *ThermalForm)
    {
        if (ThermalForm->objectName().isEmpty())
            ThermalForm->setObjectName(QString::fromUtf8("ThermalForm"));
        ThermalForm->resize(208, 341);
        gridLayout = new QGridLayout(ThermalForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        pbExclude = new QPushButton(ThermalForm);
        pbExclude->setObjectName(QString::fromUtf8("pbExclude"));

        gridLayout->addWidget(pbExclude, 6, 0, 1, 2);

        treeView = new QTreeView(ThermalForm);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setAlternatingRowColors(true);
        treeView->setSelectionMode(QAbstractItemView::MultiSelection);
        treeView->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(treeView, 7, 0, 1, 2);

        pbCreate = new QPushButton(ThermalForm);
        pbCreate->setObjectName(QString::fromUtf8("pbCreate"));

        gridLayout->addWidget(pbCreate, 10, 0, 1, 2);

        frame = new QFrame(ThermalForm);
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

        label_4 = new QLabel(ThermalForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label_2 = new QLabel(ThermalForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_6 = new QLabel(ThermalForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 9, 0, 1, 1);

        cbxFile = new QComboBox(ThermalForm);
        cbxFile->setObjectName(QString::fromUtf8("cbxFile"));
        cbxFile->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        gridLayout->addWidget(cbxFile, 5, 1, 1, 1);

        leName = new QLineEdit(ThermalForm);
        leName->setObjectName(QString::fromUtf8("leName"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leName->sizePolicy().hasHeightForWidth());
        leName->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(leName, 9, 1, 1, 1);

        dsbxDepth = new DepthForm(ThermalForm);
        dsbxDepth->setObjectName(QString::fromUtf8("dsbxDepth"));

        gridLayout->addWidget(dsbxDepth, 1, 1, 1, 1);

        label_3 = new QLabel(ThermalForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbSelect = new QPushButton(ThermalForm);
        pbSelect->setObjectName(QString::fromUtf8("pbSelect"));

        horizontalLayout->addWidget(pbSelect);

        pbEdit = new QPushButton(ThermalForm);
        pbEdit->setObjectName(QString::fromUtf8("pbEdit"));

        horizontalLayout->addWidget(pbEdit);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        pbClose = new QPushButton(ThermalForm);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));

        gridLayout->addWidget(pbClose, 11, 0, 1, 2);

        line = new QFrame(ThermalForm);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 8, 0, 1, 2);

        line_2 = new QFrame(ThermalForm);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 4, 0, 1, 2);

        toolName = new ToolName(ThermalForm);
        toolName->setObjectName(QString::fromUtf8("toolName"));

        gridLayout->addWidget(toolName, 2, 1, 1, 1);


        retranslateUi(ThermalForm);

        QMetaObject::connectSlotsByName(ThermalForm);
    } // setupUi

    void retranslateUi(QWidget *ThermalForm)
    {
        ThermalForm->setWindowTitle(QCoreApplication::translate("ThermalForm", "Form", nullptr));
        pbExclude->setText(QCoreApplication::translate("ThermalForm", "Exclude deselected thermals.", nullptr));
        pbCreate->setText(QCoreApplication::translate("ThermalForm", "Create", nullptr));
        label->setText(QCoreApplication::translate("ThermalForm", "Thermal Insulation Toolpath", nullptr));
        label_4->setText(QCoreApplication::translate("ThermalForm", "File:", nullptr));
        label_2->setText(QCoreApplication::translate("ThermalForm", "Depth:", nullptr));
        label_6->setText(QCoreApplication::translate("ThermalForm", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("ThermalForm", "Tool:", nullptr));
        pbSelect->setText(QCoreApplication::translate("ThermalForm", "Select", nullptr));
        pbEdit->setText(QCoreApplication::translate("ThermalForm", "Edit", nullptr));
        pbClose->setText(QCoreApplication::translate("ThermalForm", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThermalForm: public Ui_ThermalForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THERMALFORM_H
