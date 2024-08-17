#pragma once
#include<iostream>
#include"character.h"
class Pirate:public Character{
    public:
        Pirate(std::string name,int hp,int stamina):Character(name,hp,stamina){}
        Pirate(Pirate& other):Character(other.get_name(),other.get_hp(),other.get_stamina()){}
        ~Pirate(){}
        void kill(std::unique_ptr<Character>& enemy) override{
            std::cout<<get_name()<<" pirate swings sword to kill "<<enemy->get_name()<<std::endl;
            enemy->die();
        }
};