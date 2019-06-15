#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDebug>
#include <QTcpSocket>

class Database
{
public:
    Database();
    QSqlDatabase db;
};

#endif // DATABASE_H
