#pragma once
#include<iostream>
#include"character.h"
#include"man.h"
#include"woman.h"
#include<memory>
enum class Character_type{man,woman};
class Character_factory{
    public:
        Character_factory(){}
        Character_factory(Character_factory& other) = delete;
        virtual ~Character_factory(){}
        virtual std::unique_ptr<Character> create_character(Character_type type,std::string name){
            std::unique_ptr<Character> result;
            if(type==Character_type::man)
                result=std::unique_ptr<Character>(new Man(name));
            else if(type==Character_type::woman)
                result=std::unique_ptr<Character>(new Woman(name));
            return result;
        }
};