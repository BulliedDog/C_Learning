#pragma once
#include<memory>
#include"character.h"
#include"pirate.h"
#include"officer.h"
enum Character_type{pirate,officer};
class Character_factory{
    public:
        std::unique_ptr<Character> create_character(Character_type type,std::string name,int hp=100,int stamina=100){
            if(type==Character_type::pirate)
                return std::unique_ptr<Character>(new Pirate(name,hp,stamina));
            else if(type==Character_type::officer)
                return std::unique_ptr<Character>(new Officer(name,hp,stamina));
            return nullptr;
        }
};