//
//  Jet.cpp
//  JetsProgram
//
//  Created by Airik Leon on 12/13/17.
//  Copyright © 2017 Airik Leon. All rights reserved.
//

#include "Jet.hpp"

Jet::Jet(){
}
Jet::Jet(string model, int speed, int range, double price){
    this->model = model;
    this->speedInMPH = speed;
    this->range = range;
    this->price = price;
}
string Jet::getModel(){
    return this->model;
}
void Jet::setModel(string model){
    this->model = model;
}
double Jet::getSpeedInMach(){
    return this->speedInMPH;
}
void Jet::setSpeedInMPH(int speed){
    this->speedInMPH = speed;
}
int Jet::getRange(){
    return this->range;
}
void Jet::setRange(int range){
    this->range = range;
}
double Jet::getPrice(){
    return this->price;
}
void Jet::setPrice(double price){
    this->price = price;
}
Pilot Jet::getPilot(){
    return this->pilot;
}
void Jet::setPilot(Pilot p){
    this->pilot = p;
}
