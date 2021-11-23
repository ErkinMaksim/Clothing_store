#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include "db_core.h"
#include <QString>
#include <QtSql/QSql>
#include "reg_window.h"
#include "auth_window.h"

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void display();
    bool connectDB();


private:
    Ui::MainWindow *ui_main;

    auth_window ui_auth;
    reg_window ui_reg;

    QString m_username;
    QString m_userpass;

    QString db_input;

    QSqlDatabase mw_db;

    int user_counter;
    bool m_loginSuccesfull;

    QSqlDatabase *db;
    QSqlTableModel *model;

private:
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();

private slots:
    void authorizeUser();
    void registerWindowShow();
    void registerUser();

};
#endif // MAINWINDOW_H
