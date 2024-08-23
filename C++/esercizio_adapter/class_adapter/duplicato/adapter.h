#pragma once
#include"character.h"
#include"plant.h"
class Adapter:public Character,private Plant{
    public:
        Adapter(Plant& plant):Plant(plant){}
        Adapter(const Adapter& other)=default;
        ~Adapter()=default;
        void die() override{
            Plant::dry();
        }
};