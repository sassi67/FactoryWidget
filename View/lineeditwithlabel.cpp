/**************************************************************************
**    CFDEM Workbench
**
**    File: lineeditwithlabel.cpp
**    Author: Alessandro Sacilotto
**    Created on: 2015-03-05
**
**    Copyright (C) 2015 DCS Computing GmbH
**************************************************************************/

#include "lineeditwithlabel.h"
#include <QLabel>
#include <QLineEdit>
#include <QHBoxLayout>

/**
 * @author Alessandro Sacilotto
 * @brief LineEditWithLabel::LineEditWithLabel
 * @param label
 * @param parent
 */
LineEditWithLabel::LineEditWithLabel(const QString &label, QWidget *parent) :
    QWidget(parent),
    label_(new QLabel(label,this)),
    lineEdit_(new QLineEdit(this)),
    fLayout_(new QHBoxLayout(this))
{
    fLayout_->addWidget(label_);
    fLayout_->addWidget(lineEdit_);
}

