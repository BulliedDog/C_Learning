#pragma once
#include<iostream>
class Character{
    private:
        std::string name;
    public:
        Character(std::string name):name{name}{}
        virtual ~Character(){}
        virtual void who(){}
};