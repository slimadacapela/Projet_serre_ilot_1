/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VuePrincipale.cpp
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 17:53
 */

#include "VuePrincipale.h"

VuePrincipale::VuePrincipale() {
    widget.setupUi(this);
    serre = new VueSerre();
    meteo = new VueMeteo();
    widget.meteo->addWidget(meteo);
    widget.serre->addWidget(serre);
    widget.serre->addWidget(serre);
    widget.serre->addWidget(serre);
}

VuePrincipale::~VuePrincipale() {
}
