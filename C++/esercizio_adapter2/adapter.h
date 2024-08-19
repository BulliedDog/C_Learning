#pragma once
#include"target.h"
#include"adaptee.h"
class Adapter:public Target,private Adaptee{
    public:
        void print() const override{
            Adaptee::print();   //specific_request
        }
};