#ifndef RUNE_H
#define RUNE_H
#include "runeenum.h"
#include "fieldsymbolenum.h"
#include <QString>

class Rune
{
public:
    Rune(bool active, RuneEnum runeName, FieldSymbolEnum field);
    Rune(RuneEnum runeName);
    Rune();
    void randomize();
    QString toString();
    bool active;
    RuneEnum runeName;
    FieldSymbolEnum field;
};

#endif // RUNE_H
