/**************************************************************************
**    CFDEM Workbench
**
**    File: widgetstore.cpp
**    Author: Alessandro Sacilotto
**    Created on: 2015-03-05
**
**    Copyright (C) 2015 DCS Computing GmbH
**************************************************************************/

#include "widgetstore.h"
/**
 * @author Alessandro Sacilotto
 * @brief WidgetStore::WidgetStore
 * @param parent
 *
 *  Constructor.
 */
WidgetStore::WidgetStore(QObject *parent) :
    QObject(parent)
{
}
/**
 * @author Alessandro Sacilotto
 * @brief WidgetStore::buildWidget
 * @param type
 * @return
 */
QWidget* WidgetStore::buildWidget(const QString& type)
{
    QWidget *w = createWidget(type);

    return w;
}
