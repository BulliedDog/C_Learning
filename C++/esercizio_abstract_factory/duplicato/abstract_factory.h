#pragma once
#include<memory>
#include"pistol.h"
#include"ar.h"
#include"officer.h"
#include"terrorist.h"
class Abstract_factory{
    public:
        virtual ~Abstract_factory()=default;
        virtual std::unique_ptr<Character> create_character(std::string name,int health,std::unique_ptr<Weapon> weapon)=0;
        virtual std::unique_ptr<Weapon> create_weapon(std::string type,int damage)=0;
};