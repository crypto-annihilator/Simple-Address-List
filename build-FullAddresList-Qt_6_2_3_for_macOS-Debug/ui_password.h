/********************************************************************************
** Form generated from reading UI file 'password.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORD_H
#define UI_PASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Password
{
public:

    void setupUi(QDialog *Password)
    {
        if (Password->objectName().isEmpty())
            Password->setObjectName(QString::fromUtf8("Password"));
        Password->resize(259, 139);

        retranslateUi(Password);

        QMetaObject::connectSlotsByName(Password);
    } // setupUi

    void retranslateUi(QDialog *Password)
    {
        Password->setWindowTitle(QCoreApplication::translate("Password", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Password: public Ui_Password {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORD_H
