//
//  main.cpp
//  Busdriver
//
//  Created by Fabian Hofstetter on 23.02.12.
//  Copyright 2012 Universität Zürich. All rights reserved.
//

#include <iostream>
#include <map>
#include <cstdlib>
#include <string>
#include "Passenger.h"
#define SIZEOFBUS 30
#define NUMBEROFSTATIONS 8
#define TIMEBETWEENSTATIONS 1

using std::string;

std::map<std::string, Passenger*> onTheBus;

void init();
void wait(int seconds);
void print();
void letPassengersOut();
int getNumberOfPassengers();

int startStation = 1;
int currentStation;

std::string seats[SIZEOFBUS] = {
		"Row 1, seat A", "Row 1, seat B", "Row 1, seat C",
		"Row 2, seat A", "Row 2, seat B", "Row 2, seat C",
		"Row 3, seat A", "Row 3, seat B", "Row 3, seat C",
		"Row 4, seat A", "Row 4, seat B", "Row 4, seat C",
		"Row 5, seat A", "Row 5, seat B", "Row 5, seat C",
		"Row 6, seat A", "Row 6, seat B", "Row 6, seat C",
		"Row 7, seat A", "Row 7, seat B", "Row 7, seat C",
		"Row 8, seat A", "Row 8, seat B", "Row 8, seat C",
		"Row 9, seat A", "Row 9, seat B", "Row 9, seat C",
		"Row 10, seat A", "Row 10, seat B", "Row 10, seat C"
};

int main (int argc, const char * argv[])
{

    init();
    
    currentStation = startStation;
    
    for(int i=0; i<NUMBEROFSTATIONS; i++){
        letPassengersOut();
        
        print();
        currentStation = (currentStation + 1);
        wait(TIMEBETWEENSTATIONS);
    }
    
    
    return 0;
}

void init(){    
    for(int i=0; i < SIZEOFBUS; i++){
        int enterStation = (rand() % NUMBEROFSTATIONS) + 1;
        int leaveStation = (rand() % NUMBEROFSTATIONS) + 1;
        
        Passenger* p = new Passenger(enterStation, leaveStation);
        onTheBus.insert(std::pair<string, Passenger*>(seats[i], p));

    }
}

void wait(int seconds){

}

void letPassengersOut(){
    /*TODO 3)
     *
     * write a function so bus stops an delete the passengers in the map, which want to leave the bus at the current station
     *
     * write your implementation here
     */
}

void print(){
    /*TODO 4)
     *
     * write a function that prints a list with the passengers on the bus
     *
     * write your implementation here
     */
}

int getNumberOfPassengers(){
    /*TODO 5)
     *
     * write a function that returns how many passengers are currently on the bus
     *
     * write your implementation here
     */
}

