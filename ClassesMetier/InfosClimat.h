/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InfoClimat.h
 * Author: snir2g1
 *
 * Created on 15 janvier 2019, 17:37
 */

#ifndef INFOCLIMAT_H
#define INFOCLIMAT_H

class InfosClimat : public Observable{
public:
    InfosClimat();
    virtual ~InfosClimat();
    int getHygroClimat(){return hygrometrie;};
    int getTempClimat(){return temperature;};
    int getPsOuvrClimat(){return positionOuvrants;};
    int getLumClimat(){return luminosite;};
    void setHygroClimat(int chgt);
    void setTempClimat(int chgt);
    void setPsOuvrClimat(int chgt);
    void setLumClimat(int chgt);
private:
    int * hygrometrie;
    int * temperature;
    int * positionOuvrants;
    int * luminosite;
    int * date;
    
    //Serre * infosClimat;
};

#endif /* INFOCLIMAT_H */

