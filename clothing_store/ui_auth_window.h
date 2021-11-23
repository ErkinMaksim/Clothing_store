/********************************************************************************
** Form generated from reading UI file 'auth_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTH_WINDOW_H
#define UI_AUTH_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_auth_window
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_name;
    QLabel *label_password;
    QLineEdit *lineEdit_pass;
    QLabel *label_welcome;
    QLabel *label_name;
    QPushButton *pushButton_log;
    QPushButton *pushButton_reg;

    void setupUi(QWidget *auth_window)
    {
        if (auth_window->objectName().isEmpty())
            auth_window->setObjectName(QString::fromUtf8("auth_window"));
        auth_window->resize(400, 300);
        gridLayoutWidget = new QWidget(auth_window);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 50, 261, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_name = new QLineEdit(gridLayoutWidget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        gridLayout->addWidget(lineEdit_name, 1, 1, 1, 1);

        label_password = new QLabel(gridLayoutWidget);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setTextFormat(Qt::AutoText);
        label_password->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_password, 1, 0, 1, 1);

        lineEdit_pass = new QLineEdit(gridLayoutWidget);
        lineEdit_pass->setObjectName(QString::fromUtf8("lineEdit_pass"));

        gridLayout->addWidget(lineEdit_pass, 2, 1, 1, 1);

        label_welcome = new QLabel(gridLayoutWidget);
        label_welcome->setObjectName(QString::fromUtf8("label_welcome"));
        label_welcome->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_welcome, 0, 1, 1, 1);

        label_name = new QLabel(gridLayoutWidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_name, 2, 0, 1, 1);

        pushButton_log = new QPushButton(gridLayoutWidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));

        gridLayout->addWidget(pushButton_log, 3, 1, 1, 1);

        pushButton_reg = new QPushButton(gridLayoutWidget);
        pushButton_reg->setObjectName(QString::fromUtf8("pushButton_reg"));

        gridLayout->addWidget(pushButton_reg, 4, 1, 1, 1);

        QWidget::setTabOrder(lineEdit_name, lineEdit_pass);
        QWidget::setTabOrder(lineEdit_pass, pushButton_log);
        QWidget::setTabOrder(pushButton_log, pushButton_reg);

        retranslateUi(auth_window);

        QMetaObject::connectSlotsByName(auth_window);
    } // setupUi

    void retranslateUi(QWidget *auth_window)
    {
        auth_window->setWindowTitle(QCoreApplication::translate("auth_window", "Form", nullptr));
        label_password->setText(QCoreApplication::translate("auth_window", "Name", nullptr));
        label_welcome->setText(QCoreApplication::translate("auth_window", "User authentication", nullptr));
        label_name->setText(QCoreApplication::translate("auth_window", "Password", nullptr));
        pushButton_log->setText(QCoreApplication::translate("auth_window", "Log In", nullptr));
        pushButton_reg->setText(QCoreApplication::translate("auth_window", "Registration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class auth_window: public Ui_auth_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTH_WINDOW_H
