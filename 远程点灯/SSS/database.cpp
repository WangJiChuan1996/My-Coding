#include "database.h"

Database::Database()
{
    //连接数据库
    db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("A06");
    db.setUserName("root");
    db.setPassword("wangjichuan");
    if(!db.open()){
        qDebug()<<"连接数据库失败！";
    }else{
        qDebug()<<"成功连接数据库";
    }
}

