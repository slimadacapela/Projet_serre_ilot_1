/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueSerre.cpp
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 17:53
 */

#include "VueSerre.h"

VueSerre::VueSerre() {
    widget.setupUi(this);
    this->mettreAJour();
}

VueSerre::VueSerre(QString * nom, InfosClimat * uneInfoClimat){
    widget.setupUi(this);
    this->mettreAJour();
}

void VueSerre::mettreAJour(){
    widget.hygrometrie->setText(QString::number(InfosClimat->getHygroClimat(),10));
    widget.temperature->setText(QString::number(InfosClimat->getTempClimat(),10));
    widget.luminosite->setText(QString::number(InfosClimat->getPsOuvrClimat(),10));
    widget.positionOuvrants->setText(QString::number(InfosClimat->getLumClimat(),10));
}

VueSerre::~VueSerre() {
}
