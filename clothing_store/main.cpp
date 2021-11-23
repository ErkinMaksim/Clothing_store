#include "mainwindow.h"

#include <QApplication>
#include <QtSql>
#include <QDebug>
#include <QTableView>
#include "mainwindow.h"

int global = 100;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    db_core::Instance()->ConnectToDB("test");

    int t = 10;
    db_core test1;
        test1.ConnectToDB("test");
        test1.IsTableExist("lylyly");

        QTableView view;
        QSqlTableModel model;

        return 0;

    return a.exec();
}


int test()
{

    db_core test1;
    test1.IsTableExist("lylyly");
}
