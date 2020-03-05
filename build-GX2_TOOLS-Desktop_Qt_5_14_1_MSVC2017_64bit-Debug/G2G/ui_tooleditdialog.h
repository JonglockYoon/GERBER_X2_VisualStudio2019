/********************************************************************************
** Form generated from reading UI file 'tooleditdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLEDITDIALOG_H
#define UI_TOOLEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QVBoxLayout>
#include "tooldatabase/tooleditform.h"

QT_BEGIN_NAMESPACE

class Ui_ToolEditDialog
{
public:
    QVBoxLayout *verticalLayout;
    ToolEditForm *toolEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ToolEditDialog)
    {
        if (ToolEditDialog->objectName().isEmpty())
            ToolEditDialog->setObjectName(QString::fromUtf8("ToolEditDialog"));
        ToolEditDialog->resize(349, 429);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ToolEditDialog->sizePolicy().hasHeightForWidth());
        ToolEditDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ToolEditDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        toolEdit = new ToolEditForm(ToolEditDialog);
        toolEdit->setObjectName(QString::fromUtf8("toolEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolEdit->sizePolicy().hasHeightForWidth());
        toolEdit->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(toolEdit);

        buttonBox = new QDialogButtonBox(ToolEditDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ToolEditDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), ToolEditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ToolEditDialog);
    } // setupUi

    void retranslateUi(QDialog *ToolEditDialog)
    {
        ToolEditDialog->setWindowTitle(QCoreApplication::translate("ToolEditDialog", "Local Tool Edit[*]", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToolEditDialog: public Ui_ToolEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLEDITDIALOG_H
