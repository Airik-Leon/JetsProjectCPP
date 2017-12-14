//
//  Barrack.cpp
//  JetsProgram
//
//  Created by Airik Leon on 12/13/17.
//  Copyright © 2017 Airik Leon. All rights reserved.
//

#include "Barrack.hpp"

Barrack::Barrack(){
    pilots.push_back(Pilot("Rocky Hardflyer", "Cream Croppers", 23, 1));
    pilots.push_back(Pilot("Jimmy TwoWings", "Company X", 45, 10));
    pilots.push_back(Pilot("Sarah Silverflyer", "Fatal Foxes", 34, 4));
    pilots.push_back(Pilot("Allen Twoeyes", "Silver Liners", 56, 4));
    pilots.push_back(Pilot("Freddy Fourfingers", "Cloud Fortress", 78, 20));
    pilots.push_back(Pilot("Chuey Cloud", "Klepton 5", 43, 12));
}

void Barrack::hirePilot(){
    int choice = 0;
    cout<<
    "1. Rocky Hardflyer\n" <<
    "2. Jimmy TwoWings\n" <<
    "3. Sarah Silverflye\n" <<
    "4. Allen Twoeye\n" <<
    "5. Freddy Fourfinger\n" <<
    "6. Chuey Cloud\n"<<
    "7. Return to Home\n";
    
    cin >> choice;
    
    switch(choice) {
        case 1:
            addPilot(pilots[0]);
            break;
        case 2:
            addPilot(pilots[1]);
            break;
        case 3:
            addPilot(pilots[2]);
            break;
        case 4:
            addPilot(pilots[3]);
            break;
        case 5:
            addPilot(pilots[4]);
            break;
        case 6:
            addPilot(pilots[5]);
            break;
        case 7: return;
        default: return;
    }
}
void Barrack::addPilot(Pilot x){
    bool there = false;
    for(int i = 0; i < hiredPilots.size(); i++){
        if(hiredPilots[i].getName() == x.getName()) {
            cout<<x.getName() <<" has already been hired try someone else";
            there = true;
            break;
        }
    }
    
    if(there){
        
    }
    else{
        hiredPilots.push_back(x);
        cout<<x.getName() << " is the next pilot on deck.\n";
    }
}
void Barrack::listPilots(){
    cout<<"== Hired Pilots ==\n";
    for(int i = 0; i < hiredPilots.size() ; i++) {
        cout<<hiredPilots[i].getName()<<"\n";
    }
    cout<<"==============\n";
}
