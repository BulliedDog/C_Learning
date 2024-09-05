#pragma once
#include<iostream>
class Object{
    protected:
        std::string name;
    public:
        Object(std::string name):name{name}{}
        Object(const Object& other)=default;
        virtual ~Object()=default;
        virtual std::string get_name() const{return this->name;}
        virtual void print_name() const{
            std::cout<<"This object's name is -> "<<this->name<<std::endl;
        }
};