//
//  recursionTester.hpp
//  DataStructures
//
//  Created by Montoya, Aaron on 3/5/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef recursionTester_hpp
#define recursionTester_hpp

#include <iostream>
#include <string>
#include "/Users/amon1978/C Plus Plus/DataStructures/DataStructures/Controller/Tools/Timer.hpp"

using namespace std;

class recursionTester
{
private:
    int fib(int start);
    string mystery(string word);
public:
    void testRecursionNumbers();
    void testRecursionString();
    
};

#endif /* recursionTester_hpp */
