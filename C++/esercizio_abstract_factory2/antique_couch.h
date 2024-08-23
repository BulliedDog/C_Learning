#pragma once
#include"couch.h"
#include<iostream>
class Antique_couch:public Couch{
    public:
        void lay_on()const override{
            std::cout<<"I am laying on an Antique couch!"<<std::endl;
        }
};