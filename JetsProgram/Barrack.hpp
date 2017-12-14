//
//  Barrack.hpp
//  JetsProgram
//
//  Created by Airik Leon on 12/13/17.
//  Copyright © 2017 Airik Leon. All rights reserved.
//

#ifndef Barrack_hpp
#define Barrack_hpp
#include <vector>
#include "Pilot.hpp"
#include <iostream>

using namespace std;

class Barrack{
private:
    vector<Pilot> pilots;
    vector<Pilot> hiredPilots;
public:
    Barrack();
    void hirePilot();
    void addPilot(Pilot);
    void listPilots();
};
#include <stdio.h>

#endif /* Barrack_hpp */
