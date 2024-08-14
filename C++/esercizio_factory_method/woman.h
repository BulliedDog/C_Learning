#pragma once
#include"character.h"
class Woman:public Character{
    private:
    public:
        Woman(std::string name):Character(name){}
        ~Woman(){}
        void who() override{
            std::cout<<"I am a Woman!"<<std::endl;
        }
};