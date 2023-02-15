#include "qstringbuilder.h"

QStringBuilder& QStringBuilder::append(const QString& str)
{
    return appendString(str);
}

QStringBuilder& QStringBuilder::append(const char* str)
{
    return append(QString(str));
}

QStringBuilder& QStringBuilder::appendLine(const QString& str)
{
    appendString(str);
    builder.last().append("\n");
    return *this;
}

QStringBuilder& QStringBuilder::appendLine(const char* str)
{
    return appendLine(QString(str));
}

QString QStringBuilder::toString()
{
    return builder.join("\n");
}

QStringBuilder& QStringBuilder::appendString(const QString& str)
{
    if(builder.isEmpty())
        builder << str;
    else
        builder.last().append(str);

    return *this;
}

