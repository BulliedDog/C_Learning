#pragma once
#include"character.h"
#include<iostream>
#include<memory>
#include"stamina.h"
class Human:public Character{
    private:
        std::unique_ptr<Stamina> stamina;
    public:
        Human(std::string name="Human",int hp=100,int stamina=100):Character(name,hp),stamina{std::make_unique<Stamina>(stamina)}{}
        Human(const Human& other){
            this->stamina=std::make_unique<Stamina>(other.stamina->get_stamina());
        }
        ~Human()=default;
        void print() const override{
            std::cout<<"I'm a Human called "<<this->name<<std::endl;
        }
};