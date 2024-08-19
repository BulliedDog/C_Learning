#pragma once
#include<iostream>
class Adaptee{
    private:
        std::string name;
    public:
        void print() const{
            std::cout<<"I am an Adaptee named: "<<this->name<<std::endl;
        }
};