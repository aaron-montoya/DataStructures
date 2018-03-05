//
//  TestingStacksAndQueues.hpp
//  DataStructures
//
//  Created by Montoya, Aaron on 2/28/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef TestingStacksAndQueues_hpp
#define TestingStacksAndQueues_hpp

#include "/Users/amon1978/C Plus Plus/DataStructures/DataStructures/Controller/Tools/Timer.hpp"
#include "/Users/amon1978/C Plus Plus/DataStructures/DataStructures/Controller/FileController.hpp"
#include "/Users/amon1978/C Plus Plus/DataStructures/DataStructures/Model/Structures/Linear/Queue.hpp"
#include "/Users/amon1978/C Plus Plus/DataStructures/DataStructures/Model/Structures/Linear/Stack.hpp"
#include "/Users/amon1978/C Plus Plus/DataStructures/DataStructures/Model/Structures/Linear/List.hpp"
#include <iostream>

using namespace std;

public class TestingStacksAndQueues
{
public:
    void stackVersusList();
    void stackVersusQueue();
    void queueVersusList();
};

#endif /* TestingStacksAndQueues_hpp */
