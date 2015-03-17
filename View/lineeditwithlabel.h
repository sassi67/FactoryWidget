/**************************************************************************
**    CFDEM Workbench
**
**    File: lineeditwithlabel.h
**    Author: Alessandro Sacilotto
**    Created on: 2015-03-05
**
**    Copyright (C) 2015 DCS Computing GmbH
**************************************************************************/

#ifndef LINEEDITWITHLABEL_H
#define LINEEDITWITHLABEL_H

#include <QWidget>
#include <QString>

class QLabel;
class QLineEdit;
class QHBoxLayout;

class LineEditWithLabel : public QWidget
{
    Q_OBJECT
public:
    explicit LineEditWithLabel(const QString& label, QWidget *parent=0);
protected:

private:
    //Pre C++2011 hide by making private and don't implement
    explicit LineEditWithLabel(const LineEditWithLabel& rhs);
    LineEditWithLabel& operator= (const LineEditWithLabel& rhs);

    QLabel      *label_;
    QLineEdit   *lineEdit_;
    QHBoxLayout *fLayout_;

signals:

public slots:

private slots:

};
#endif // LINEEDITWITHLABEL_H



