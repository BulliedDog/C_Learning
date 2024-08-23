#pragma once
#include"chair.h"
#include<iostream>
class Modern_chair:public Chair{
    public:
        ~Modern_chair()=default;
        void sit_on()const override{
            std::cout<<"I am sitting on a Modern chair!"<<std::endl;
        }
};