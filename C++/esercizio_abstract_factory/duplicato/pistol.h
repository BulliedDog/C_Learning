#pragma once
#include"weapon.h"
class Pistol:public Weapon{
    private:
    public:
        Pistol(std::string type="Pistol 9mm",int damage=50):Weapon(type,damage){}
        ~Pistol()=default;
};