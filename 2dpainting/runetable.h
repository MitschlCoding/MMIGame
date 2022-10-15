#ifndef RUNETABLE_H
#define RUNETABLE_H
#include "rune.h"

class RuneTable
{
public:
    RuneTable();
    void randomize();
    void print();
    Rune* runes;
};

#endif // RUNETABLE_H
