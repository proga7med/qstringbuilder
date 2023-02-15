#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <qstringbuilder.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringBuilder builder;
    builder.append("Hello");
    builder.appendLine("World!");
    builder.append("My");
    builder.appendLine("Friend");
    QString str = builder.toString();
    std::cout << str.toStdString();

    return a.exec();
}
