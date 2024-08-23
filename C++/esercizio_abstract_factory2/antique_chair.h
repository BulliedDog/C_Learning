#pragma once
#include<iostream>
#include"chair.h"
class Antique_chair:public Chair{
    public:
        ~Antique_chair()=default;
        void sit_on() const override{
            std::cout<<"I'm sitting on an Antique chair!"<<std::endl;
        }
};