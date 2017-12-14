//
//  Jet.hpp
//  JetsProgram
//
//  Created by Airik Leon on 12/13/17.
//  Copyright © 2017 Airik Leon. All rights reserved.
//

#ifndef Jet_hpp
#define Jet_hpp
#include <string>
#include <stdio.h>
#include "Pilot.hpp"
using namespace std;
class Jet{
private:
string model;
int speedInMPH;
int range;
double price;
Pilot pilot;
public:
Jet();
Jet(string, int, int, double);
string getModel();
void setModel(string);
double getSpeedInMach();
void setSpeedInMPH(int);
int getRange();
void setRange(int);
double getPrice();
void setPrice(double);
Pilot getPilot();
void setPilot(Pilot);
};
#endif /* Jet_hpp */
