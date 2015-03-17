/**************************************************************************
**    CFDEM Workbench
**
**    File: lineeditstore.h
**    Author: Alessandro Sacilotto
**    Created on: 2015-03-05
**
**    Copyright (C) 2015 DCS Computing GmbH
**************************************************************************/

#ifndef LINEEDITSTORE_H
#define LINEEDITSTORE_H

#include "widgetstore.h"
#include <QString>

class LineEditStore : public WidgetStore
{
    Q_OBJECT
public:
    explicit LineEditStore(QWidget *parent=0);

protected:
    QWidget* createWidget(const QString &type);

private:
    //Pre C++2011 hide by making private and don't implement
    explicit LineEditStore(const LineEditStore& rhs);
    LineEditStore& operator= (const LineEditStore& rhs);

signals:

public slots:

private slots:

};
#endif // LINEEDITSTORE_H



