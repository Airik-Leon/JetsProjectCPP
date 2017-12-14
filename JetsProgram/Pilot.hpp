//
//  Pilot.hpp
//  JetsProgram
//
//  Created by Airik Leon on 12/13/17.
//  Copyright © 2017 Airik Leon. All rights reserved.
//

#ifndef Pilot_hpp
#define Pilot_hpp
#include <stdio.h>
#include <vector>
#include <string>
using namespace std; 

class Pilot{
private:
    string name;
    string organization;
    int age, experience;
    vector<Pilot> pilots;
public:
    Pilot();
    Pilot(string);
    Pilot(string, string, int, int);
    void setName(string name);
    string getName();
    void selectPilot();
    int getAge();
    void setAge(int);
    int getExperience();
    void setExpereience(int);
    string getOrganization();
    void setOrganization(string);
};
#endif /* Pilot_hpp */
