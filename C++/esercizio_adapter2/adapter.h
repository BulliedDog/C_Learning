#pragma once
#include"target.h"
#include"adaptee.h"
class Adapter:public Target,private Adaptee{
    public:
        Adapter(Adaptee& adaptee):Adaptee(adaptee),Target(adaptee.get_name()){}
        void print() const override{
            Adaptee::print();   //specific_request
        }
};