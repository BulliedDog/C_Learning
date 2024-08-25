#pragma once
#include"abstract_factory.h"
class Officer_factory:public Abstract_factory{
    public:
        std::unique_ptr<Character> create_character(std::string name,int health,std::unique_ptr<Weapon> weapon) override{
            return std::make_unique<Officer>(name,health,std::move(weapon));
        }
        std::unique_ptr<Weapon> create_weapon(std::string type,int damage) override{
            return std::make_unique<Pistol>(type,damage);
        }
};