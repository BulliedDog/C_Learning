#pragma once
#include"Character3D.h"
#include"Character2D.h"
class Adapter:public Character3D,private Character2D{
    public:
        Adapter(int x,int y,Weapon* weapon=nullptr);
        void move(int x,int y,int z) override;
        void selectWeapon(std::string name) override;
};