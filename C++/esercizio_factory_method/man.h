#pragma once
#include"character.h"
class Man:public Character{
    private:
    public:
        Man(std::string name):Character(name){}
        ~Man(){}
        void who() override{
            std::cout<<"I am a Man!"<<std::endl;
        }
};