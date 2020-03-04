/********************************************************************************
** Form generated from reading UI file 'tooldatabase.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLDATABASE_H
#define UI_TOOLDATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include "tooldatabase/tooleditform.h"
#include "tooldatabase/tooltreeview.h"

QT_BEGIN_NAMESPACE

class Ui_ToolDatabase
{
public:
    QGridLayout *gridLayout;
    ToolEditForm *toolEdit;
    ToolTreeView *treeView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbNew;
    QPushButton *pbNewGroup;
    QPushButton *pbCopy;
    QPushButton *pbDelete;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ToolDatabase)
    {
        if (ToolDatabase->objectName().isEmpty())
            ToolDatabase->setObjectName(QString::fromUtf8("ToolDatabase"));
        ToolDatabase->resize(826, 612);
        gridLayout = new QGridLayout(ToolDatabase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toolEdit = new ToolEditForm(ToolDatabase);
        toolEdit->setObjectName(QString::fromUtf8("toolEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolEdit->sizePolicy().hasHeightForWidth());
        toolEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(toolEdit, 0, 1, 1, 1);

        treeView = new ToolTreeView(ToolDatabase);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbNew = new QPushButton(ToolDatabase);
        pbNew->setObjectName(QString::fromUtf8("pbNew"));

        horizontalLayout->addWidget(pbNew);

        pbNewGroup = new QPushButton(ToolDatabase);
        pbNewGroup->setObjectName(QString::fromUtf8("pbNewGroup"));

        horizontalLayout->addWidget(pbNewGroup);

        pbCopy = new QPushButton(ToolDatabase);
        pbCopy->setObjectName(QString::fromUtf8("pbCopy"));

        horizontalLayout->addWidget(pbCopy);

        pbDelete = new QPushButton(ToolDatabase);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));

        horizontalLayout->addWidget(pbDelete);

        buttonBox = new QDialogButtonBox(ToolDatabase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);


        retranslateUi(ToolDatabase);

        QMetaObject::connectSlotsByName(ToolDatabase);
    } // setupUi

    void retranslateUi(QDialog *ToolDatabase)
    {
        ToolDatabase->setWindowTitle(QCoreApplication::translate("ToolDatabase", "Tool Database[*]", nullptr));
        pbNew->setText(QCoreApplication::translate("ToolDatabase", "New Tool", nullptr));
        pbNewGroup->setText(QCoreApplication::translate("ToolDatabase", "New Group", nullptr));
        pbCopy->setText(QCoreApplication::translate("ToolDatabase", "Copy", nullptr));
        pbDelete->setText(QCoreApplication::translate("ToolDatabase", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToolDatabase: public Ui_ToolDatabase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLDATABASE_H
