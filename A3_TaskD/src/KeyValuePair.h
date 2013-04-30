/*
 Assignment 3 - Algorithms and data structures
 
 University of Zurich
 Department of Informatics
 Vizualization and Multimedia Laboratory
 
 Author: Genc Mazlami
 */

#ifndef KeyValueHeader
#define KeyValueHeader

class KeyValuePair{
    
    
private:
    
    int key;
    
    std::string value;
    
    
public:
    
    KeyValuePair(int key_ , std::string value_);
    
    std::string getValue();
    
    int getKey();
    
    
};


#endif

