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

void VueSerre::mettreAJour(){
    widget.hygrometrie->setText("1");
    widget.temperature->setText("−273,15");
    widget.luminosite->setText("100 000");
    widget.positionOuvrants->setText("359");
}

VueSerre::~VueSerre() {
}
