#include "rune.h"
#include <cstdlib>
#include <time.h>

Rune::Rune(bool active, RuneEnum runeName, FieldSymbolEnum field){
    this->active = active;
    this->runeName = runeName;
    this->field = field;
    std::srand(time(NULL));
};
Rune::Rune(RuneEnum runeName){
    this->active = true;
    this->runeName = runeName;
    this->field = FieldSymbolEnum::death;
    std::srand(time(NULL));
};
Rune::Rune(){
    this->active = true;
    this->runeName = RuneEnum::hate_death;
    this->field = FieldSymbolEnum::death;
    std::srand(time(NULL));
}
void Rune::randomize(){
    this->active = std::rand() % 2;
    switch(std::rand() % 7){
    case 0:
        this->field = FieldSymbolEnum::heart;
        break;
    case 1:
        this->field = FieldSymbolEnum::brokenHeart;
        break;
    case 2:
        this->field = FieldSymbolEnum::death;
        break;
    case 3:
        this->field = FieldSymbolEnum::dove;
        break;
    case 4:
        this->field = FieldSymbolEnum::sword;
        break;
    case 5:
        this->field = FieldSymbolEnum::wound;
        break;
    case 6:
        this->field = FieldSymbolEnum::yingyang;
        break;
    }
};

QString Rune::toString(){
    QString str = "Name: ";
    switch(this->runeName){
    case RuneEnum::hate_death:
        str += "Hate-Death";
        break;
    case RuneEnum::hate_endless:
        str += "Hate-Endless";
        break;
    case RuneEnum::hate_sword:
        str += "Hate-Sword";
        break;
    case RuneEnum::hope_false:
        str += "Hope-False";
        break;
    case RuneEnum::hope_love:
        str += "Hope-Love";
        break;
    case RuneEnum::hope_relaxation:
        str += "Hope-Relaxation";
        break;
    case RuneEnum::hurt_grief:
        str += "Hurt-Grief";
        break;
    case RuneEnum::hurt_heal:
        str += "Hurt-Heal";
        break;
    case RuneEnum::hurt_pain:
        str += "Hurt-Heal";
        break;
    }

    str += " Active: ";
    if(this->active){
        str += "True";
    } else {
        str += "False";
    }

    str += " Field: ";
    switch(this->field){
    case FieldSymbolEnum::brokenHeart:
        str += "Broken Heart";
        break;
    case FieldSymbolEnum::heart:
        str += "Heart";
        break;
    case FieldSymbolEnum::death:
        str += "Death";
        break;
    case FieldSymbolEnum::dove:
        str += "Dove";
        break;
    case FieldSymbolEnum::sword:
        str += "Sword";
        break;
    case FieldSymbolEnum::wound:
        str += "Wound";
        break;
    case FieldSymbolEnum::yingyang:
        str += "Ying-Yang";
        break;
    return str;
    }
}
