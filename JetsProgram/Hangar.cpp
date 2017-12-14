//
//  Hangar.cpp
//  JetsProgram
//
//  Created by Airik Leon on 12/13/17.
//  Copyright © 2017 Airik Leon. All rights reserved.
//
#include "Hangar.hpp"
#include "Jet.hpp"

Hangar::Hangar(){
    jets.push_back(Jet("Rager", 5000, 1000, 10000.0));
    jets.push_back(Jet("Jubilent", 1000, 2000, 10000.0));
    jets.push_back(Jet("Sorrow", 4000, 3000, 9000.0));
    jets.push_back(Jet("Envy", 6000, 600, 8322.0));
    jets.push_back(Jet("Greedy", 3000, 10000, 43.0));
}
void Hangar::addJet(Jet newJet) {
    jets.push_back(newJet);
}
void Hangar::displayJets() {
    cout<<"==jets in the Fleet ==\n";
    for(int i = 0; i < this->jets.size(); i++) {
        cout<<"Model: "<<this->jets[i].getModel()<<"\n";
        cout<<"Speed: mach "<< this->jets[i].getSpeedInMach()<<"\n";
        cout<<"Range: "<< this->jets[i].getRange()<<"\n";
        cout<<"Price: "<<this->jets[i].getPrice()<<"\n";
        cout<<"Pilot: " <<this->jets[i].getPilot().getName()<<"\n";
        cout<<"Organization: " << this->jets[i].getPilot().getOrganization()<<"\n";
        cout<<"Experience: " << this->jets[i].getPilot().getExperience()<<"\n";
        cout<<"Age: " <<this->jets[i].getPilot().getAge()<<"\n";
        cout<<"================\n";
    }
}
void Hangar::displayFastestJet() {
    Jet fastestJet;
    fastestJet = this->jets[0];
    
    for(int i = 1; i < this->jets.size(); i++){
        if(this->jets[i].getSpeedInMach() >  fastestJet.getSpeedInMach()) {
            fastestJet = this->jets[i];
        }
    }
    cout<<"== Fastest Jet Information ==\n" ;
    cout<<"Model: "<< fastestJet.getModel()<<"\n";
    cout<<"Speed: mach"<< fastestJet.getSpeedInMach()<<"\n";
    cout<<"Range: "<< fastestJet.getRange()<<"\n";
    cout<<"Model: "<< fastestJet.getPrice()<<"\n";
    cout<<"Pilot: " << fastestJet.getPilot().getName()<<"\n";
    cout<<"Organization: " << fastestJet.getPilot().getOrganization()<<"\n";
    cout<<"Experience: " << fastestJet.getPilot().getExperience()<<"\n";
    cout<<"Age: " << fastestJet.getPilot().getAge()<<"\n";
    cout<<"================\n";
}
void Hangar::displayLongestRange() {
    
    Jet range;
    range = this->jets[0];
    for(int i = 0; i < this->jets.size(); i++){
        if(this->jets[i].getRange() > range.getRange()){
            range = this->jets[i];
        }
    }
    cout<<"== Longest Range Jet  ==\n";
    cout<<"Model: "<< range.getModel()<<"\n";
    cout<<"Speed: mach "<< range.getSpeedInMach()<<"\n";
    cout<<"Range: "<< range.getRange()<<"\n";
    cout<<"Price: "<< range.getPrice()<<"\n";
    cout<<"Pilot: " << range.getPilot().getName()<<"\n";
    cout<<"Organization: " << range.getPilot().getOrganization()<<"\n";
    cout<<"Experience: " << range.getPilot().getExperience()<<"\n";
    cout<<"Age: " << range.getPilot().getAge()<<"\n";
    cout<<"================\n";
}
