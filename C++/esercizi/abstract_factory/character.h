#pragma once
#include<iostream>
class Character{
    protected:
        int hp;
        std::string name;
    public:
        Character(std::string name="Character",int hp=100):name{name},hp{hp}{}
        Character(const Character& other)=default;
        virtual ~Character()=default;
        virtual void print() const=0;
};