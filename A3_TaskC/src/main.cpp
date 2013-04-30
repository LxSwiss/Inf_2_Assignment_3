//
//  main.cpp
//  Vectors
//
//  Created by Loc Nguyen on 23.02.12.
//  Copyright (c) 2012 Universität Zürich. All rights reserved.
//

#include <iostream>
#include "vectors.cpp"
using std::string;

int main (int argc, const char * argv[])
{

    ArrayVector<int> my_vector;
    
    for (int i=0; i<15; i++) {
        my_vector.insertAtRank(i, i*2+2);
        std::cout<<"in slot " << i << " is the number " << my_vector.elemAtRank(i) << "\n";
    };
    
    my_vector.removeAtRank(10);
    my_vector.removeAtRank(1);
    my_vector.removeAtRank(12);
    
    std::cout <<"show vector after some removals\n";
    
    for (int i=0; i<12; i++) {
        std::cout<<"in slot " << i << " is the number " << my_vector.elemAtRank(i) << "\n";

    }

    ArrayVector<string> my_Stringcollection;
    my_Stringcollection.insertAtRank(0, "blueString");
    my_Stringcollection.insertAtRank(1, "StringTanga");
    my_Stringcollection.insertAtRank(2, "TigerString");
    my_Stringcollection.insertAtRank(1, "invisibleString");
    my_Stringcollection.insertAtRank(0, "FurString");
    my_Stringcollection.removeAtRank(1);

    for(int i=0; i<my_Stringcollection.size();i++){
    	std::cout<<my_Stringcollection.elemAtRank(i)<<std::endl;
    }



    return 0;
}

