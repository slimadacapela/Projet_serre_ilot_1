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
    meteo = new VueMeteo();
    widget.meteo->addWidget(meteo);
    for( int i = 0 ; i < 3 ; i++){
        serre[i] = new VueSerre();
        widget.serre->addWidget(serre[i]);
    }
    this -> mettreAJour();
}

void VuePrincipale::mettreAJour(){
    meteo->mettreAJour();
    serre[0]->mettreAJour();
}

VuePrincipale::~VuePrincipale() {
}
