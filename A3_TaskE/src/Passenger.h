//
//  Passenger.h
//  Busdriver
//
//  Created by Fabian Hofstetter on 23.02.12.
//  Copyright 2012 Universität Zürich. All rights reserved.
//

#ifndef Busdriver_Passenger_h
#define Busdriver_Passenger_h

#include <string>

class Passenger{
public:
    Passenger(int enterStation_, int leaveStation_);
    int getEnterStation();
    int getLeaveStation();
    bool isSitting();
    
private:
    int enterStation;
    int leaveStation;
    bool sitting;
    
};


#endif
