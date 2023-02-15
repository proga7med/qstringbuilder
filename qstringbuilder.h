#ifndef QSTRINGBUILDER_H
#define QSTRINGBUILDER_H

#include <QString>
#include <QStringList>

class QStringBuilder
{
public:
    QStringBuilder() = default;
    QStringBuilder& append(const QString& str);
    QStringBuilder& append(const char* str);
    QStringBuilder& appendLine(const QString& str);
    QStringBuilder& appendLine(const char* str);
    QString toString();

private:
    QStringBuilder& appendString(const QString& str);

private:
    QStringList builder;
};

#endif // QSTRINGBUILDER_H
