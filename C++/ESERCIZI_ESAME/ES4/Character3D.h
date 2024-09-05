#pragma once
#include"Weapon.h"
#include<map>
class Character3D{
    private:
        int x,y,z;
        std::map<std::string,Weapon*> weapons;
        Weapon* weapon;
    public:
        Character3D()=default;
        Character3D(int x,int y, int z,Weapon* weap=nullptr);
        virtual ~Character3D()=default;
        virtual void move(int x,int y,int z);
        virtual void selectWeapon(std::string name);
        Weapon* get_weapon() const;
        void add_weapon(Weapon* weapon);
};