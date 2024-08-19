#pragma once
#include<iostream>
class Target{
    private:
        std::string name;
    public:
        Target(std::string name):name{name}{}
        Target(Target& other):Target(other.name){}
        ~Target(){}
        virtual void print() const{
            std::cout<<"I am a Target named: "<<this->name<<std::endl;
        }
};