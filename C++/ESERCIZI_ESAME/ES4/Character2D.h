#pragma once
#include<map>
#include"Weapon.h"
class Character2D{
    private:
        int x,y;
        std::map<int,Weapon*> weapons;
        Weapon* weapon;
    public:
        Character2D()=default;
        Character2D(int x,int y,Weapon* weapon=nullptr);
        ~Character2D()=default;
        void move(int x,int y);
        void selectWeapon(int pos);
        void add_weapon(Weapon* weapon);
};