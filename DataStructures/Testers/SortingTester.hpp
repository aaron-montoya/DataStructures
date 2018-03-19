//
//  SortingTester.hpp
//  DataStructures
//
//  Created by Montoya, Aaron on 3/15/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef SortingTester_hpp
#define SortingTester_hpp

#include <iostream>
#include "/Users/amon1978/C Plus Plus/DataStructures/DataStructures/Controller/FileController.hpp"
#include "/Users/amon1978/C Plus Plus/DataStructures/DataStructures/Controller/Tools/Timer.hpp"

class SortingTester
{
private:
    int swapCount;
    void quickSort(vector<CrimeData> & data, int low, int high);
    int partition(vector<CrimeData> & data, int low, int high);
    void swap(vector<CrimeData> & info, int small, int large);
public:
    void testSorts();
};

#endif /* SortingTester_hpp */
