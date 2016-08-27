#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include "Position.h"

class ArrayList {

public:

    virtual ~ArrayList() {}

    virtual void Print();
    virtual void Sort();
    
    virtual Position * Search();
    virtual void InsertAt();

    virtual void DeleteAt();

    virtual Position * ElementAtPosition();
};

#endif
