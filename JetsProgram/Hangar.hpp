//
//  Hangar.hpp
//  JetsProgram
//
//  Created by Airik Leon on 12/13/17.
//  Copyright © 2017 Airik Leon. All rights reserved.
//

#ifndef Hangar_hpp
#define Hangar_hpp

#include "Jet.hpp"
#include <vector>
#include <iostream>
using namespace std;

#include <stdio.h>
class Hangar{
private:
    vector<Jet> jets;
public:
    Hangar();
    Hangar(int);
    void addJet(Jet);
    void displayJets();
    void listJets();
    void displayFastestJet();
    void displayLongestRange();
};
#endif /* Hangar_hpp */
