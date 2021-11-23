/********************************************************************************
** Form generated from reading UI file 'reg_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REG_WINDOW_H
#define UI_REG_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reg_window
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_pass;
    QLabel *label_conf;
    QLineEdit *lineEdit_pass;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_conf;
    QPushButton *pushButton_reg;
    QLabel *label_name;
    QLabel *label_reg;

    void setupUi(QWidget *reg_window)
    {
        if (reg_window->objectName().isEmpty())
            reg_window->setObjectName(QString::fromUtf8("reg_window"));
        reg_window->resize(400, 300);
        gridLayoutWidget = new QWidget(reg_window);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 40, 271, 151));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_pass = new QLabel(gridLayoutWidget);
        label_pass->setObjectName(QString::fromUtf8("label_pass"));
        label_pass->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_pass, 9, 0, 1, 1);

        label_conf = new QLabel(gridLayoutWidget);
        label_conf->setObjectName(QString::fromUtf8("label_conf"));
        label_conf->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_conf, 10, 0, 1, 1);

        lineEdit_pass = new QLineEdit(gridLayoutWidget);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));

        gridLayout->addWidget(lineEdit_pass, 9, 1, 1, 1);

        lineEdit_name = new QLineEdit(gridLayoutWidget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        gridLayout->addWidget(lineEdit_name, 8, 1, 1, 1);

        lineEdit_conf = new QLineEdit(gridLayoutWidget);
        lineEdit_conf->setObjectName(QString::fromUtf8("lineEdit_conf"));

        gridLayout->addWidget(lineEdit_conf, 10, 1, 1, 1);

        pushButton_reg = new QPushButton(gridLayoutWidget);
        pushButton_reg->setObjectName(QString::fromUtf8("pushButton_reg"));

        gridLayout->addWidget(pushButton_reg, 11, 1, 1, 1);

        label_name = new QLabel(gridLayoutWidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_name, 8, 0, 1, 1);

        label_reg = new QLabel(gridLayoutWidget);
        label_reg->setObjectName(QString::fromUtf8("label_reg"));
        label_reg->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_reg, 6, 1, 1, 1);


        retranslateUi(reg_window);

        QMetaObject::connectSlotsByName(reg_window);
    } // setupUi

    void retranslateUi(QWidget *reg_window)
    {
        reg_window->setWindowTitle(QCoreApplication::translate("reg_window", "Form", nullptr));
        label_pass->setText(QCoreApplication::translate("reg_window", "Password", nullptr));
        label_conf->setText(QCoreApplication::translate("reg_window", "Confirm", nullptr));
        pushButton_reg->setText(QCoreApplication::translate("reg_window", "Registration", nullptr));
        label_name->setText(QCoreApplication::translate("reg_window", "Name", nullptr));
        label_reg->setText(QCoreApplication::translate("reg_window", "User registration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reg_window: public Ui_reg_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REG_WINDOW_H
