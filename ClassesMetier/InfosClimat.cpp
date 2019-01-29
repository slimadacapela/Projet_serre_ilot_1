/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InfoClimat.cpp
 * Author: snir2g1
 * 
 * Created on 15 janvier 2019, 17:37
 */

#include "InfosClimat.h"

InfosClimat::InfosClimat() {
    hygrometrie = 1;
    temperature = 2;
    positionOuvrants = 3;
    luminosite = 12;
}

InfosClimat::~InfosClimat() {
    
}

void InfosClimat::setHygroClimat(int chgt){
    hygrometrie = chgt;
}
void InfosClimat::setTempClimat(int chgt){
    temperature = chgt;
}
void InfosClimat::setPsOuvrClimat(int chgt){
    positionOuvrants = chgt;
}
void InfosClimat::setLumClimat(int chgt){
    luminosite = chgt;
}