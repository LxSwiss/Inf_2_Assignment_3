//
//  vectors.h
//  Vectors
//
//  Created by Loc Nguyen on 24.02.12.
//  Copyright (c) 2012 Universität Zürich. All rights reserved.
//

#ifndef Vectors_vectors_h
#define Vectors_vectors_h

template <typename Object>
class ArrayVector {
    
public:     
    ArrayVector(int initCap = 10);                  // constructor given max capacity
    ~ArrayVector();                                 // destructor
    
    int size() const;                               // number of elements
    bool isEmpty() const;							 
    
    Object& elemAtRank(int r);                      // returns element at rank r
    void replaceAtRank(int r, const Object& e);         
    void removeAtRank(int r);						
    void insertAtRank(int r, const Object& e);	  
    
private:								  
    int		capacity;                               // actual length of array
    int		numberOfElements;                       // number of elements in vector
    Object*	array;                                  // array storing the elements
    
protected:
    void overflow();                                // handle overflow by resizing
};


#endif
