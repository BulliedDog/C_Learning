#pragma once
#include"weapon.h"
class Ar:public Weapon{
    private:
    public:
        Ar(std::string type="AK 7.62",int damage=80):Weapon(type,damage){}
        ~Ar()=default;
};