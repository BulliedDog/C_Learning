#pragma once
#include<iostream>
class Abstract{
    protected:
        std::string name{"Abstract"};
    public:
        void print_abstract() const{
            std::cout<<"Abstract object's name is -> "<<this->name<<std::endl;
        }
        std::string get_name() const{return name;}
};