#pragma once
#include<iostream>
#include"couch.h"
class Modern_couch:public Couch{
    public:
        ~Modern_couch()=default;
        void lay_on()const override{
            std::cout<<"I am laying on a Modern couch!"<<std::endl;
        }
};