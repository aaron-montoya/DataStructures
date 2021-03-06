//
//  recursionTester.cpp
//  DataStructures
//
//  Created by Montoya, Aaron on 3/5/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "recursionTester.hpp"

int recursionTester :: fib(int number)
{
    if(number == 0 || number == 1)
    {
        cout << "Reached a base case" << endl;
        return 1;
    }
    else
    {
        cout << "Reached a recursive case with: " << number - 1 << " and " << number - 2 << endl;
        return fib(number - 1) + fib(number - 2);
    }
}

string recursionTester :: mystery(string word)
{
    if(word.length() == 1)
    {
        return word;
    }
    else
    {
        return word + mystery(word.substr(0, word.length() - 1));
    }
}

void recursionTester :: testRecursionNumbers()
{
    Timer recursionTimer;
    cout << "Testing fibonacci with 10" << endl;
    recursionTimer.startTimer();
    cout << fib(10) << endl;
    recursionTimer.stopTimer();
    recursionTimer.displayInformation();
}

void recursionTester :: testRecursionString()
{
    cout << mystery("X") << endl;
    cout << mystery("car") << endl;
    cout << mystery("apple") << endl;
}























