//
//  Passenger.cpp
//  Busdriver
//
//  Created by Fabian Hofstetter on 23.02.12.
//  Copyright 2012 Universität Zürich. All rights reserved.
//

#include <iostream>
#include "Passenger.h"

Passenger::Passenger(int enterStation_, int leaveStation_):enterStation(enterStation_), leaveStation(leaveStation_){}


int Passenger::getEnterStation(){
    return enterStation;
}


int Passenger::getLeaveStation(){
    return leaveStation;
}


bool Passenger::isSitting(){
    return isSitting();
}