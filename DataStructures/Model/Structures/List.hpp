//
//  List.hpp
//  DataStructures
//
//  Created by Montoya, Aaron on 2/8/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <assert.h>
#include "../Node/LinearNode.hpp"

template <class Type>
class List
{
protected:
    int size;
    
public:
    //Structure
    virtual void add(Type item) = 0;
    virtual void attAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFormIndex(int index) = 0;
    //Helper
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* List_hpp */
