//
//  main.cpp
//  JetsProgram
//
//  Created by Airik Leon on 12/13/17.
//  Copyright © 2017 Airik Leon. All rights reserved.
//
#include "Pilot.hpp"
#include "Jet.hpp"
#include "Hangar.hpp"
#include "Barrack.hpp"

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    //user inputs for user;
    int intInput;
    string stringInput;
    double dblInput;
    
    bool repeat= true;
    Hangar cloudNine;
    Barrack pilotsGroup;
    
    while(repeat) {
        cout<<             "1. List fleet\n"<<
                           "2. View fastest jet\n" <<
                           "3. View jet with longest range\n"<<
                           "4. Add a jet to the fleet\n" <<
                           "5. Hire a pilot\n" <<
        "6. Quit\n";
        
        cin >> intInput;
        switch(intInput) {
            case 1:
            {
                cloudNine.displayJets();
                break;
            }
            case 2:
            {
                cloudNine.displayFastestJet();
                break;
            }
            case 3:
            {
                cloudNine.displayLongestRange();
                break;
            }
            case 4:
            {
                Jet newJet = Jet();
                cout<<"Enter the model for your jet"<<endl;
                cin>> stringInput;
                newJet.setModel(stringInput);
                cin.clear();
                
                cout<<"Enter the speed of the jet. (MPH)"<<endl;
                cin>> intInput;
                newJet.setSpeedInMPH(intInput);
                
                cout<<"Enter the range of the jet. "<<endl;
                cin>> dblInput;
                newJet.setRange(dblInput);
                
                cout<<"Enter the price of the jet. ";
                cin>> dblInput;
                newJet.setPrice(dblInput);
                
                cloudNine.addJet(newJet);
                break;
            }

            case 5:
            {
                pilotsGroup.hirePilot();
                pilotsGroup.listPilots();
                break;
            }
            case 6:
            {
                cout<<"Shutting down..."<<endl;
                repeat = false;
                break;
            }
        }
    }
    return 0;
}
