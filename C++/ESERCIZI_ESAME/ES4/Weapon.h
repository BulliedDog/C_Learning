#pragma once
#include<iostream>
class Weapon{
    private:
        int n;
        std::string name;
    public:
        Weapon(std::string name,int n);
        ~Weapon()=default;
        int get_number() const{return n;}
        void set_number(int n){this->n=n;}
        std::string get_name() const{return name;}
        void set_name(std::string name){this->name=name;}
};