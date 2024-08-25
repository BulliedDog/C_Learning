#pragma once
#include<iostream>
class Weapon{
    private:
        std::string type;
        int damage;
    public:
        Weapon(std::string type,int damage):type{type},damage{damage}{}
        virtual ~Weapon()=default;
        std::string get_type() const{return type;}
        void set_type(std::string type){this->type=type;}
        int get_damage() const{return this->damage;}
};