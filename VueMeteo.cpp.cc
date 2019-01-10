/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueMeteo.cpp
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 17:54
 */

#include "VueMeteo.h"

VueMeteo::VueMeteo() {
    widget.setupUi(this);
}

void VueMeteo::mettreAJour(){
    widget.vitesseVent->setText("350");
    widget.temperature->setText("−273,15");
}

VueMeteo::~VueMeteo() {
}
