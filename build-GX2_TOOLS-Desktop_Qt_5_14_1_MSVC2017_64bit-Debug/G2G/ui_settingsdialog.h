/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "doublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *fontSizeLabel;
    QComboBox *cbxFontSize;
    QGroupBox *gbViewer;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chbOpenGl;
    QCheckBox *chbAntialiasing;
    QCheckBox *chbSmoothScSh;
    QGroupBox *gbxColor;
    QFormLayout *formLayout;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_3;
    QLabel *minimumCircleSegmentsLabel;
    QSpinBox *sbxMinCircleSegments;
    QLabel *minimumCircleSegmentLengthLabel;
    DoubleSpinBox *dsbxMinCircleSegmentLength;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *chbxCleanPolygons;
    QCheckBox *chbxSkipDuplicates;
    QCheckBox *chbxSimplifyRegions;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *label_14;
    QLineEdit *leFileExtension;
    QPlainTextEdit *pteStart;
    QPlainTextEdit *pteEnd;
    QLineEdit *leFormat;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QCheckBox *chbxInfo;
    QCheckBox *chbxSameGFolder;
    QGroupBox *groupBox_6;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QLineEdit *leSpindleCC;
    QLabel *label_11;
    QLineEdit *leLaserCPC;
    QLabel *label_12;
    QLineEdit *leLaserDPC;
    QLabel *label_13;
    QLineEdit *leSpindleLaserOff;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_7;
    DoubleSpinBox *dsbxZeroX;
    DoubleSpinBox *dsbxZeroY;
    QComboBox *cbxZeroPos;
    QLabel *label_4;
    DoubleSpinBox *dsbxHomeX;
    DoubleSpinBox *dsbxHomeY;
    QComboBox *cbxHomePos;
    QLabel *label_5;
    DoubleSpinBox *dsbxPinX;
    DoubleSpinBox *dsbxPinY;
    QLabel *labelAPIcon;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(399, 663);
        gridLayout = new QGridLayout(SettingsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 2);

        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_8 = new QVBoxLayout(tab);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(6, 6, 6, 6);
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 9, 6, 6);
        fontSizeLabel = new QLabel(groupBox);
        fontSizeLabel->setObjectName(QString::fromUtf8("fontSizeLabel"));

        gridLayout_2->addWidget(fontSizeLabel, 0, 0, 1, 1);

        cbxFontSize = new QComboBox(groupBox);
        cbxFontSize->addItem(QString());
        cbxFontSize->addItem(QString());
        cbxFontSize->addItem(QString());
        cbxFontSize->addItem(QString());
        cbxFontSize->addItem(QString());
        cbxFontSize->addItem(QString());
        cbxFontSize->addItem(QString());
        cbxFontSize->addItem(QString());
        cbxFontSize->setObjectName(QString::fromUtf8("cbxFontSize"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbxFontSize->sizePolicy().hasHeightForWidth());
        cbxFontSize->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(cbxFontSize, 0, 1, 1, 1);


        verticalLayout_8->addWidget(groupBox);

        gbViewer = new QGroupBox(tab);
        gbViewer->setObjectName(QString::fromUtf8("gbViewer"));
        verticalLayout_2 = new QVBoxLayout(gbViewer);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 9, 6, 6);
        chbOpenGl = new QCheckBox(gbViewer);
        chbOpenGl->setObjectName(QString::fromUtf8("chbOpenGl"));

        verticalLayout_2->addWidget(chbOpenGl);

        chbAntialiasing = new QCheckBox(gbViewer);
        chbAntialiasing->setObjectName(QString::fromUtf8("chbAntialiasing"));

        verticalLayout_2->addWidget(chbAntialiasing);

        chbSmoothScSh = new QCheckBox(gbViewer);
        chbSmoothScSh->setObjectName(QString::fromUtf8("chbSmoothScSh"));

        verticalLayout_2->addWidget(chbSmoothScSh);


        verticalLayout_8->addWidget(gbViewer);

        gbxColor = new QGroupBox(tab);
        gbxColor->setObjectName(QString::fromUtf8("gbxColor"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gbxColor->sizePolicy().hasHeightForWidth());
        gbxColor->setSizePolicy(sizePolicy1);
        formLayout = new QFormLayout(gbxColor);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setContentsMargins(6, 9, 6, 6);

        verticalLayout_8->addWidget(gbxColor);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        formLayout_3 = new QFormLayout(groupBox_4);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        minimumCircleSegmentsLabel = new QLabel(groupBox_4);
        minimumCircleSegmentsLabel->setObjectName(QString::fromUtf8("minimumCircleSegmentsLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, minimumCircleSegmentsLabel);

        sbxMinCircleSegments = new QSpinBox(groupBox_4);
        sbxMinCircleSegments->setObjectName(QString::fromUtf8("sbxMinCircleSegments"));
        sbxMinCircleSegments->setMinimum(12);
        sbxMinCircleSegments->setMaximum(360);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, sbxMinCircleSegments);

        minimumCircleSegmentLengthLabel = new QLabel(groupBox_4);
        minimumCircleSegmentLengthLabel->setObjectName(QString::fromUtf8("minimumCircleSegmentLengthLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, minimumCircleSegmentLengthLabel);

        dsbxMinCircleSegmentLength = new DoubleSpinBox(groupBox_4);
        dsbxMinCircleSegmentLength->setObjectName(QString::fromUtf8("dsbxMinCircleSegmentLength"));
        dsbxMinCircleSegmentLength->setDecimals(2);
        dsbxMinCircleSegmentLength->setMinimum(0.010000000000000);
        dsbxMinCircleSegmentLength->setMaximum(10.000000000000000);
        dsbxMinCircleSegmentLength->setSingleStep(0.010000000000000);
        dsbxMinCircleSegmentLength->setValue(0.500000000000000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, dsbxMinCircleSegmentLength);


        verticalLayout->addWidget(groupBox_4);

        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(6, 9, 6, 6);
        chbxCleanPolygons = new QCheckBox(groupBox_2);
        chbxCleanPolygons->setObjectName(QString::fromUtf8("chbxCleanPolygons"));

        verticalLayout_4->addWidget(chbxCleanPolygons);

        chbxSkipDuplicates = new QCheckBox(groupBox_2);
        chbxSkipDuplicates->setObjectName(QString::fromUtf8("chbxSkipDuplicates"));

        verticalLayout_4->addWidget(chbxSkipDuplicates);

        chbxSimplifyRegions = new QCheckBox(groupBox_2);
        chbxSimplifyRegions->setObjectName(QString::fromUtf8("chbxSimplifyRegions"));

        verticalLayout_4->addWidget(chbxSimplifyRegions);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_4->addWidget(label_14, 2, 0, 1, 1);

        leFileExtension = new QLineEdit(groupBox_3);
        leFileExtension->setObjectName(QString::fromUtf8("leFileExtension"));

        gridLayout_4->addWidget(leFileExtension, 2, 1, 1, 1);

        pteStart = new QPlainTextEdit(groupBox_3);
        pteStart->setObjectName(QString::fromUtf8("pteStart"));

        gridLayout_4->addWidget(pteStart, 5, 0, 1, 2);

        pteEnd = new QPlainTextEdit(groupBox_3);
        pteEnd->setObjectName(QString::fromUtf8("pteEnd"));

        gridLayout_4->addWidget(pteEnd, 7, 0, 1, 2);

        leFormat = new QLineEdit(groupBox_3);
        leFormat->setObjectName(QString::fromUtf8("leFormat"));

        gridLayout_4->addWidget(leFormat, 9, 0, 1, 2);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 8, 0, 1, 2);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 6, 0, 1, 2);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 4, 0, 1, 2);

        chbxInfo = new QCheckBox(groupBox_3);
        chbxInfo->setObjectName(QString::fromUtf8("chbxInfo"));

        gridLayout_4->addWidget(chbxInfo, 1, 0, 1, 2);

        chbxSameGFolder = new QCheckBox(groupBox_3);
        chbxSameGFolder->setObjectName(QString::fromUtf8("chbxSameGFolder"));

        gridLayout_4->addWidget(chbxSameGFolder, 0, 0, 1, 2);


        verticalLayout_3->addWidget(groupBox_3);

        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        formLayout_2 = new QFormLayout(groupBox_6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        leSpindleCC = new QLineEdit(groupBox_6);
        leSpindleCC->setObjectName(QString::fromUtf8("leSpindleCC"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leSpindleCC);

        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_11);

        leLaserCPC = new QLineEdit(groupBox_6);
        leLaserCPC->setObjectName(QString::fromUtf8("leLaserCPC"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, leLaserCPC);

        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_12);

        leLaserDPC = new QLineEdit(groupBox_6);
        leLaserDPC->setObjectName(QString::fromUtf8("leLaserDPC"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, leLaserDPC);

        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_13);

        leSpindleLaserOff = new QLineEdit(groupBox_6);
        leSpindleLaserOff->setObjectName(QString::fromUtf8("leSpindleLaserOff"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, leSpindleLaserOff);


        verticalLayout_3->addWidget(groupBox_6);

        groupBox_5 = new QGroupBox(tab_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_3 = new QGridLayout(groupBox_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(label_6, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(label_8, 0, 2, 1, 1);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(label_9, 0, 3, 1, 1);

        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        dsbxZeroX = new DoubleSpinBox(groupBox_5);
        dsbxZeroX->setObjectName(QString::fromUtf8("dsbxZeroX"));
        dsbxZeroX->setMinimumSize(QSize(100, 0));
        dsbxZeroX->setDecimals(3);
        dsbxZeroX->setMinimum(-1000.000000000000000);
        dsbxZeroX->setMaximum(1000.000000000000000);

        gridLayout_3->addWidget(dsbxZeroX, 1, 1, 1, 1);

        dsbxZeroY = new DoubleSpinBox(groupBox_5);
        dsbxZeroY->setObjectName(QString::fromUtf8("dsbxZeroY"));
        dsbxZeroY->setMinimumSize(QSize(100, 0));
        dsbxZeroY->setDecimals(3);
        dsbxZeroY->setMinimum(-1000.000000000000000);
        dsbxZeroY->setMaximum(1000.000000000000000);

        gridLayout_3->addWidget(dsbxZeroY, 1, 2, 1, 1);

        cbxZeroPos = new QComboBox(groupBox_5);
        cbxZeroPos->addItem(QString());
        cbxZeroPos->addItem(QString());
        cbxZeroPos->addItem(QString());
        cbxZeroPos->addItem(QString());
        cbxZeroPos->addItem(QString());
        cbxZeroPos->setObjectName(QString::fromUtf8("cbxZeroPos"));
        sizePolicy.setHeightForWidth(cbxZeroPos->sizePolicy().hasHeightForWidth());
        cbxZeroPos->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(cbxZeroPos, 1, 3, 1, 1);

        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        dsbxHomeX = new DoubleSpinBox(groupBox_5);
        dsbxHomeX->setObjectName(QString::fromUtf8("dsbxHomeX"));
        dsbxHomeX->setMinimumSize(QSize(100, 0));
        dsbxHomeX->setDecimals(3);
        dsbxHomeX->setMinimum(-1000.000000000000000);
        dsbxHomeX->setMaximum(1000.000000000000000);

        gridLayout_3->addWidget(dsbxHomeX, 2, 1, 1, 1);

        dsbxHomeY = new DoubleSpinBox(groupBox_5);
        dsbxHomeY->setObjectName(QString::fromUtf8("dsbxHomeY"));
        dsbxHomeY->setMinimumSize(QSize(100, 0));
        dsbxHomeY->setDecimals(3);
        dsbxHomeY->setMinimum(-1000.000000000000000);
        dsbxHomeY->setMaximum(1000.000000000000000);

        gridLayout_3->addWidget(dsbxHomeY, 2, 2, 1, 1);

        cbxHomePos = new QComboBox(groupBox_5);
        cbxHomePos->addItem(QString());
        cbxHomePos->addItem(QString());
        cbxHomePos->addItem(QString());
        cbxHomePos->addItem(QString());
        cbxHomePos->addItem(QString());
        cbxHomePos->setObjectName(QString::fromUtf8("cbxHomePos"));
        sizePolicy.setHeightForWidth(cbxHomePos->sizePolicy().hasHeightForWidth());
        cbxHomePos->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(cbxHomePos, 2, 3, 1, 1);

        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        dsbxPinX = new DoubleSpinBox(groupBox_5);
        dsbxPinX->setObjectName(QString::fromUtf8("dsbxPinX"));
        dsbxPinX->setDecimals(3);
        dsbxPinX->setMinimum(-1000.000000000000000);
        dsbxPinX->setMaximum(1000.000000000000000);

        gridLayout_3->addWidget(dsbxPinX, 3, 1, 1, 1);

        dsbxPinY = new DoubleSpinBox(groupBox_5);
        dsbxPinY->setObjectName(QString::fromUtf8("dsbxPinY"));
        dsbxPinY->setDecimals(3);
        dsbxPinY->setMinimum(-1000.000000000000000);
        dsbxPinY->setMaximum(1000.000000000000000);

        gridLayout_3->addWidget(dsbxPinY, 3, 2, 1, 1);

        labelAPIcon = new QLabel(groupBox_5);
        labelAPIcon->setObjectName(QString::fromUtf8("labelAPIcon"));

        gridLayout_3->addWidget(labelAPIcon, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_5);

        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);


        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Settings[*]", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SettingsDialog", "UI", nullptr));
        fontSizeLabel->setText(QCoreApplication::translate("SettingsDialog", "Font Size", nullptr));
        cbxFontSize->setItemText(0, QCoreApplication::translate("SettingsDialog", "7", nullptr));
        cbxFontSize->setItemText(1, QCoreApplication::translate("SettingsDialog", "8", nullptr));
        cbxFontSize->setItemText(2, QCoreApplication::translate("SettingsDialog", "9", nullptr));
        cbxFontSize->setItemText(3, QCoreApplication::translate("SettingsDialog", "10", nullptr));
        cbxFontSize->setItemText(4, QCoreApplication::translate("SettingsDialog", "11", nullptr));
        cbxFontSize->setItemText(5, QCoreApplication::translate("SettingsDialog", "12", nullptr));
        cbxFontSize->setItemText(6, QCoreApplication::translate("SettingsDialog", "13", nullptr));
        cbxFontSize->setItemText(7, QCoreApplication::translate("SettingsDialog", "14", nullptr));

        gbViewer->setTitle(QCoreApplication::translate("SettingsDialog", "Viewer", nullptr));
        chbOpenGl->setText(QCoreApplication::translate("SettingsDialog", "Open GL", nullptr));
        chbAntialiasing->setText(QCoreApplication::translate("SettingsDialog", "Anti aliasing", nullptr));
        chbSmoothScSh->setText(QCoreApplication::translate("SettingsDialog", "Smooth scaling / shearing", nullptr));
        gbxColor->setTitle(QCoreApplication::translate("SettingsDialog", "Colors", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("SettingsDialog", "UI", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("SettingsDialog", "Gerber / G-Code", nullptr));
        minimumCircleSegmentsLabel->setText(QCoreApplication::translate("SettingsDialog", "Minimum points of circle aproximation:", nullptr));
        minimumCircleSegmentLengthLabel->setText(QCoreApplication::translate("SettingsDialog", "The minimum length of circle aproximation:", nullptr));
        dsbxMinCircleSegmentLength->setSuffix(QCoreApplication::translate("SettingsDialog", " mm", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SettingsDialog", "Gerber", nullptr));
        chbxCleanPolygons->setText(QCoreApplication::translate("SettingsDialog", "Cleaning Polygons", nullptr));
        chbxSkipDuplicates->setText(QCoreApplication::translate("SettingsDialog", "Skip duplicates", nullptr));
        chbxSimplifyRegions->setText(QCoreApplication::translate("SettingsDialog", "Simplify Regions", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("SettingsDialog", "Gerber", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("SettingsDialog", "G-Code", nullptr));
        label_14->setText(QCoreApplication::translate("SettingsDialog", "File Extension:", nullptr));
#if QT_CONFIG(tooltip)
        leFormat->setToolTip(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>Default <span style=\" font-weight:600;\">G?X?Y?Z?F?S?</span></p><p><span style=\" font-weight:600;\">?</span> - only if the value has changed.</p><p><span style=\" font-weight:600;\">+</span> - always.</p><p>If one of the commands <span style=\" font-weight:600;\">G, X, Y, Z, F</span> and<span style=\" font-weight:600;\"> S</span> is missing, it will not be inserted into the G-code.</p><p>If there is a space between the teams, then it will also be inserted into the G-code.</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("SettingsDialog", "The format of the line with the coordinates:", nullptr));
        label_2->setText(QCoreApplication::translate("SettingsDialog", "Finish with:", nullptr));
        label->setText(QCoreApplication::translate("SettingsDialog", "Start with:", nullptr));
        chbxInfo->setText(QCoreApplication::translate("SettingsDialog", "Add a comment with the parameters G-\320\241ode", nullptr));
        chbxSameGFolder->setText(QCoreApplication::translate("SettingsDialog", "Save the G-Code to the project folder.", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("SettingsDialog", "Spindle / Laser Control Code", nullptr));
        label_10->setText(QCoreApplication::translate("SettingsDialog", "Spindle On:", nullptr));
        label_11->setText(QCoreApplication::translate("SettingsDialog", "Constant Laser Power Mode On:", nullptr));
        label_12->setText(QCoreApplication::translate("SettingsDialog", "Dynamic Laser Power Mode On:", nullptr));
        label_13->setText(QCoreApplication::translate("SettingsDialog", "Spindle/Laser Off:", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("SettingsDialog", "Auto-placement for pins and markers", nullptr));
        label_6->setText(QCoreApplication::translate("SettingsDialog", "X offset", nullptr));
        label_8->setText(QCoreApplication::translate("SettingsDialog", "Y offset", nullptr));
        label_9->setText(QCoreApplication::translate("SettingsDialog", "Place", nullptr));
        label_7->setText(QCoreApplication::translate("SettingsDialog", "Zero:", nullptr));
        dsbxZeroX->setPrefix(QString());
        dsbxZeroX->setSuffix(QCoreApplication::translate("SettingsDialog", " mm", nullptr));
        dsbxZeroY->setPrefix(QString());
        dsbxZeroY->setSuffix(QCoreApplication::translate("SettingsDialog", " mm", nullptr));
        cbxZeroPos->setItemText(0, QCoreApplication::translate("SettingsDialog", "Top Left", nullptr));
        cbxZeroPos->setItemText(1, QCoreApplication::translate("SettingsDialog", "Top Right", nullptr));
        cbxZeroPos->setItemText(2, QCoreApplication::translate("SettingsDialog", "Bottom Left", nullptr));
        cbxZeroPos->setItemText(3, QCoreApplication::translate("SettingsDialog", "Bottom Right", nullptr));
        cbxZeroPos->setItemText(4, QCoreApplication::translate("SettingsDialog", "Always Zero", nullptr));

        label_4->setText(QCoreApplication::translate("SettingsDialog", "Home:", nullptr));
        dsbxHomeX->setPrefix(QString());
        dsbxHomeX->setSuffix(QCoreApplication::translate("SettingsDialog", " mm", nullptr));
        dsbxHomeY->setPrefix(QString());
        dsbxHomeY->setSuffix(QCoreApplication::translate("SettingsDialog", " mm", nullptr));
        cbxHomePos->setItemText(0, QCoreApplication::translate("SettingsDialog", "Top Left", nullptr));
        cbxHomePos->setItemText(1, QCoreApplication::translate("SettingsDialog", "Top Right", nullptr));
        cbxHomePos->setItemText(2, QCoreApplication::translate("SettingsDialog", "Bottom Left", nullptr));
        cbxHomePos->setItemText(3, QCoreApplication::translate("SettingsDialog", "Bottom Right", nullptr));
        cbxHomePos->setItemText(4, QCoreApplication::translate("SettingsDialog", "Always Zero", nullptr));

        label_5->setText(QCoreApplication::translate("SettingsDialog", "Pins:", nullptr));
        dsbxPinX->setPrefix(QString());
        dsbxPinX->setSuffix(QCoreApplication::translate("SettingsDialog", " mm", nullptr));
        dsbxPinY->setPrefix(QString());
        dsbxPinY->setSuffix(QCoreApplication::translate("SettingsDialog", " mm", nullptr));
        labelAPIcon->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("SettingsDialog", "G-Code", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
