#pragma once
#include<iostream>
#include"character.h"
#include"human.h"
#include"abstract_factory.h"
class Human_factory:public Abstract_factory{
    public:
        ~Human_factory()=default;
        std::unique_ptr<Character> create_character(std::string name,int hp) override{
            return std::make_unique<Human>(name,hp);
        }
};