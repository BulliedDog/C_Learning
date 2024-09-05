#pragma once
#include<iostream>
#include"character.h"
#include<memory>
class Abstract_factory{
    public:
        virtual ~Abstract_factory()=default;
        virtual std::unique_ptr<Character> create_character(std::string name,int hp)=0;
};