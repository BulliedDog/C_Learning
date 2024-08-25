#pragma once
#include<iostream>
#include<memory>
#include"weapon.h"
class Character{
    private:
        std::string name;
        int health;
        std::unique_ptr<Weapon> weapon;
    public:
        Character(std::string name,int health,std::unique_ptr<Weapon> weapon):name{name},health{health},weapon{std::move(weapon)}{}
        virtual ~Character()=default;
        std::string get_name() const{return this->name;}
        void set_name(std::string name){this->name=name;}
        int get_health() const{return health;}
        void set_health(int hp){this->health=hp;}
        void damage(int damage){this->health-=damage;}
        virtual void shoot(std::unique_ptr<Character>& enemy)=0;
        std::unique_ptr<Weapon>& get_weapon(){return weapon;}
};