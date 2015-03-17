/**************************************************************************
**    CFDEM Workbench
**
**    File: lineeditstore.cpp
**    Author: Alessandro Sacilotto
**    Created on: 2015-03-05
**
**    Copyright (C) 2015 DCS Computing GmbH
**************************************************************************/

#include "lineeditstore.h"
#include "lineeditwithlabel.h"

/**
 * @brief LineEditStore::LineEditStore
 * @param parent
 */
LineEditStore::LineEditStore(QWidget *parent) :
    WidgetStore(parent)
{
}
/**
 * @brief LineEditStore::createWidget
 * @param type
 * @return
 */
QWidget *LineEditStore::createWidget(const QString &type)
{
    QWidget *w = NULL;

    if (type == "lineeditwithlabel")
        w = new LineEditWithLabel("Demo");
//    else if (type == "pepperoni")
//        pizza = new QNYStylePepperoniPizza();

    return w;

}

