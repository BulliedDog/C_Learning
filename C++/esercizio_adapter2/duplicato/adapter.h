#pragma once
#include"object.h"
#include"abstract.h"
#include<memory>
class Adapter:public Object,private Abstract{
    public:
        Adapter(Abstract& abstract):Abstract(abstract),Object(abstract.get_name()){}
        Adapter(const Adapter& other)=default;
        ~Adapter()=default;
        void print_name() const override{
            Abstract::print_abstract();
        }
};