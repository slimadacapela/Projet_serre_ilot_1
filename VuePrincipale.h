/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VuePrincipale.h
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 17:53
 */

#ifndef _VUEPRINCIPALE_H
#define _VUEPRINCIPALE_H

#include "ui_VuePrincipale.h"
#include "VueMeteo.h"
#include "VueSerre.h"

class VuePrincipale : public QWidget {
    Q_OBJECT
public:
    VuePrincipale();
    void mettreAJour();
    virtual ~VuePrincipale();
private:
    Ui::VuePrincipale widget;
    VueMeteo *meteo;
    VueSerre *serre[3];
};

#endif /* _VUEPRINCIPALE_H */
