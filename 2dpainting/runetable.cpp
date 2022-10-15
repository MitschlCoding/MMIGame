#include "runetable.h"
#include <QDebug>

RuneTable::RuneTable()
{
    this->runes = new Rune[9];
    this->runes[0].runeName = RuneEnum::hate_death;
    this->runes[1].runeName = RuneEnum::hate_endless;
    this->runes[2].runeName = RuneEnum::hate_sword;
    this->runes[3].runeName = RuneEnum::hope_false;
    this->runes[4].runeName = RuneEnum::hope_love;
    this->runes[5].runeName = RuneEnum::hope_relaxation;
    this->runes[6].runeName = RuneEnum::hurt_grief;
    this->runes[7].runeName = RuneEnum::hurt_heal;
    this->runes[8].runeName = RuneEnum::hurt_pain;
}

void RuneTable::randomize(){
    for(int i = 0; i < 9; i++){
        this->runes[i].randomize();
    }
}

void RuneTable::print(){
    for(int i = 0; i < 9; i++){
        qInfo() << this->runes[i].toString();
    }
}
