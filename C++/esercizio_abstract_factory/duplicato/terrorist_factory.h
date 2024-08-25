#pragma once
#include"abstract_factory.h"
class Terrorist_factory:public Abstract_factory{
    public:
        std::unique_ptr<Character> create_character(std::string name,int health,std::unique_ptr<Weapon> weapon) override{
            return std::make_unique<Terrorist>(name,health,std::move(weapon));
        }
        std::unique_ptr<Weapon> create_weapon(std::string type,int damage) override{
            return std::make_unique<Ar>(type,damage);
        }
};