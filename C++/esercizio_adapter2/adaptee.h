#pragma once
#include<iostream>
class Adaptee{
    private:
        std::string name;
    public:
        Adaptee(std::string name="Random"):name{name}{}
        ~Adaptee(){}
        void print() const{
            std::cout<<"I am an Adaptee named: "<<this->name<<std::endl;
        }
        std::string get_name() const{
            return this->name;
        }
};