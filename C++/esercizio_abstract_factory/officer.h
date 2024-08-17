#pragma once
#include"character.h"
class Officer:public Character{
    public:
        Officer(std::string name,int hp,int stamina):Character(name,hp,stamina){}
        Officer(Officer& other)=delete;
        ~Officer(){}
        void kill(std::unique_ptr<Character>& enemy) override{
            std::cout<<get_name()<<" officer shoots musket to kill "<<enemy->get_name()<<std::endl;
            enemy->die();
        }
};