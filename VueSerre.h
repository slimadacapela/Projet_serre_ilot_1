/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueSerre.h
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 17:53
 */

#ifndef _VUESERRE_H
#define _VUESERRE_H

#include "ui_VueSerre.h"
#include "./ClassesMetier/InfosClimat.h"

class VueSerre : public QWidget, Observateur {
    Q_OBJECT
public:
    VueSerre();
    VueSerre(QString * nom, InfosClimat * uneInfoClimat);
    virtual ~VueSerre();
    
public slots :
    void mettreAJour();
    
private:
    Ui::VueSerre widget;
    QString * nom;
    InfosClimat * infosClimat;
};


#endif /* _VUESERRE_H */
