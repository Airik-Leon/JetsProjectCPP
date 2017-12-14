//
//  Pilot.cpp
//  JetsProgram
//
//  Created by Airik Leon on 12/13/17.
//  Copyright © 2017 Airik Leon. All rights reserved.
//

#include "Pilot.hpp"

//Constructors
Pilot::Pilot(){
    pilots.push_back(Pilot("John", "cloud nine", 29, 10));
    pilots.push_back(Pilot("John", "Foxtrot", 29, 10));
    pilots.push_back(Pilot("Sarah silver", "Fatal foxes", 30, 5));
    selectPilot();
}
Pilot::Pilot(string paramName){
    this->name = paramName;
}
Pilot::Pilot(string name, string org, int age, int exp){
    this->name = name;
    this->organization = org;
    this->age = age;
    this->experience = exp;
}
//Methods
void Pilot::setName(string paramName){
    this->name =  paramName;
}
string Pilot::getName(){
    return this->name;
}
void Pilot::selectPilot(){
    srand(time(NULL));
    int random = rand()% pilots.size();
    Pilot p = pilots[random];
}
int Pilot::getAge(){
    return age;
}
void Pilot::setAge(int age){
    this->age = age;
}
int Pilot::getExperience(){
    return this->experience;
}
void Pilot::setExpereience(int exp){
    this->experience = exp;
}
string Pilot::getOrganization(){
    return this->organization;
}
void Pilot::setOrganization(string org){
    this->organization = org;
}
