#pragma once
#include"character.h"
class Officer:public Character{
    public:
        Officer(std::string name,int health,std::unique_ptr<Weapon> weapon):Character(name,health,std::move(weapon)){}
        Officer(const Officer& other)=default;
        ~Officer()=default;
        void shoot(std::unique_ptr<Character>& enemy) override{
            std::cout<<this->get_name()<<" shoots "<<enemy->get_name()<<" with a "<<this->get_weapon()->get_type()<<" dealing "<<this->get_weapon()->get_damage()<<" so "<<enemy->get_name()<<" remains with ";
            enemy->damage(this->get_weapon()->get_damage());
            std::cout<<enemy->get_health()<<"hp!"<<std::endl;
        }
};