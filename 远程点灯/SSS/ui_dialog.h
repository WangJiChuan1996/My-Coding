/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPlainTextEdit *plainTextEdit_show;
    QLabel *label_num;
    QLabel *label_Port;
    QPushButton *pushButton_open;
    QPushButton *pushButton_close;
    QLabel *label_show_IP;
    QLabel *label_show_num;
    QLabel *label_status;
    QLabel *label_show_status;
    QLabel *label_IP;
    QLabel *label_show_Port;
    QPushButton *pushButton_clear;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(509, 388);
        plainTextEdit_show = new QPlainTextEdit(Dialog);
        plainTextEdit_show->setObjectName(QStringLiteral("plainTextEdit_show"));
        plainTextEdit_show->setGeometry(QRect(10, 20, 491, 241));
        label_num = new QLabel(Dialog);
        label_num->setObjectName(QStringLiteral("label_num"));
        label_num->setGeometry(QRect(140, 350, 67, 31));
        label_Port = new QLabel(Dialog);
        label_Port->setObjectName(QStringLiteral("label_Port"));
        label_Port->setGeometry(QRect(130, 320, 71, 31));
        pushButton_open = new QPushButton(Dialog);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));
        pushButton_open->setGeometry(QRect(410, 270, 89, 41));
        pushButton_close = new QPushButton(Dialog);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(410, 340, 89, 41));
        label_show_IP = new QLabel(Dialog);
        label_show_IP->setObjectName(QStringLiteral("label_show_IP"));
        label_show_IP->setGeometry(QRect(40, 290, 67, 21));
        label_show_num = new QLabel(Dialog);
        label_show_num->setObjectName(QStringLiteral("label_show_num"));
        label_show_num->setGeometry(QRect(40, 350, 91, 31));
        label_status = new QLabel(Dialog);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(130, 260, 67, 21));
        label_show_status = new QLabel(Dialog);
        label_show_status->setObjectName(QStringLiteral("label_show_status"));
        label_show_status->setGeometry(QRect(40, 260, 91, 21));
        label_IP = new QLabel(Dialog);
        label_IP->setObjectName(QStringLiteral("label_IP"));
        label_IP->setGeometry(QRect(110, 290, 121, 21));
        label_show_Port = new QLabel(Dialog);
        label_show_Port->setObjectName(QStringLiteral("label_show_Port"));
        label_show_Port->setGeometry(QRect(40, 320, 91, 21));
        pushButton_clear = new QPushButton(Dialog);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(310, 310, 99, 41));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\346\234\215\345\212\241\345\231\250", 0));
        label_num->setText(QApplication::translate("Dialog", "0", 0));
        label_Port->setText(QString());
        pushButton_open->setText(QApplication::translate("Dialog", "\345\274\200\345\220\257", 0));
        pushButton_close->setText(QApplication::translate("Dialog", "\345\205\263\351\227\255", 0));
        label_show_IP->setText(QApplication::translate("Dialog", "\346\234\215\345\212\241\345\231\250IP\357\274\232", 0));
        label_show_num->setText(QApplication::translate("Dialog", "\345\275\223\345\211\215\345\234\250\347\272\277\346\225\260\357\274\232", 0));
        label_status->setText(QApplication::translate("Dialog", "\345\205\263\351\227\255", 0));
        label_show_status->setText(QApplication::translate("Dialog", "\346\234\215\345\212\241\345\231\250\347\212\266\346\200\201:", 0));
        label_IP->setText(QString());
        label_show_Port->setText(QApplication::translate("Dialog", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\357\274\232", 0));
        pushButton_clear->setText(QApplication::translate("Dialog", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
