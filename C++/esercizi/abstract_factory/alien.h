#pragma once
#include"character.h"
#include<iostream>
class Alien:public Character{
    private:
        int dmg;
    public:
        Alien(std::string name="Alien",int hp=200,int dmg=50):Character(name,hp),dmg{dmg}{}
        Alien(const Alien& other)=default;
        ~Alien()=default;
        virtual void print() const override{
            std::cout<<"RAAAHHH -> "<<this->name<<std::endl;
        }
};