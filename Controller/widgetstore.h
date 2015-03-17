/**************************************************************************
**    CFDEM Workbench
**
**    File: widgetstore.h
**    Author: Alessandro Sacilotto
**    Created on: 2015-03-05
**
**    Copyright (C) 2015 DCS Computing GmbH
**************************************************************************/

#ifndef WIDGETSTORE_H
#define WIDGETSTORE_H

#include <QObject>
#include <QString>
#include <QWidget>

class WidgetStore : public QObject
{
    Q_OBJECT
public:
    explicit WidgetStore(QObject *parent=0);
    virtual QWidget* buildWidget(const QString& type);

protected:
    virtual QWidget* createWidget(const QString& type) = 0;

private:
    //Pre C++2011 hide by making private and don't implement
    explicit WidgetStore(const WidgetStore& rhs);
    WidgetStore& operator= (const WidgetStore& rhs);

signals:

public slots:

private slots:

};
#endif // WIDGETSTORE_H



